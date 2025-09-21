from collections import deque

# 방향: 위(0), 오른쪽(1), 아래(2), 왼쪽(3)
dx = [-1, 0, 1, 0]
dy = [0, 1, 0, -1]

def solve_one_case(N, K, field):
    # 시작점(X), 목적지(Y) 찾기
    start, end = None, None
    for i in range(N):
        for j in range(N):
            if field[i][j] == 'X':
                start = (i, j)
            elif field[i][j] == 'Y':
                end = (i, j)

    # BFS
    q = deque()
    visited = [[[[False]*(K+1) for _ in range(4)] for _ in range(N)] for _ in range(N)]
    
    # 초기 상태: 위쪽(0) 방향, 벌목 K
    q.append((start[0], start[1], 0, K, 0))  # (x, y, dir, remain, cnt)
    visited[start[0]][start[1]][0][K] = True
    
    while q:
        x, y, d, k, cnt = q.popleft()
        
        if (x, y) == end:
            return cnt
        
        # 1) 좌회전
        nd = (d + 3) % 4
        if not visited[x][y][nd][k]:
            visited[x][y][nd][k] = True
            q.append((x, y, nd, k, cnt+1))
        
        # 2) 우회전
        nd = (d + 1) % 4
        if not visited[x][y][nd][k]:
            visited[x][y][nd][k] = True
            q.append((x, y, nd, k, cnt+1))
        
        # 3) 전진
        nx, ny = x + dx[d], y + dy[d]
        if 0 <= nx < N and 0 <= ny < N:
            if field[nx][ny] in ('G', 'Y'):  # 땅 or 목적지
                if not visited[nx][ny][d][k]:
                    visited[nx][ny][d][k] = True
                    q.append((nx, ny, d, k, cnt+1))
            elif field[nx][ny] == 'T' and k > 0:  # 나무 베기
                if not visited[nx][ny][d][k-1]:
                    visited[nx][ny][d][k-1] = True
                    q.append((nx, ny, d, k-1, cnt+1))
    
    return -1

# 메인 실행
T = int(input())
for t in range(1, T+1):
    N, K = map(int, input().split())
    field = [list(input().strip()) for _ in range(N)]
    ans = solve_one_case(N, K, field)
    print(f"#{t} {ans}")
