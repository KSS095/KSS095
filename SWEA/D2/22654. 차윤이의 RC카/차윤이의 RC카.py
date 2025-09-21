def solve():
    T = int(input().strip())
    directions = [(-1, 0), (0, 1), (1, 0), (0, -1)]  # 위, 오, 아, 왼

    for t in range(1, T + 1):
        N = int(input().strip())
        field = [list(input().strip()) for _ in range(N)]

        # 시작점, 도착점 찾기
        start = end = None
        for i in range(N):
            for j in range(N):
                if field[i][j] == 'X':
                    start = (i, j)
                elif field[i][j] == 'Y':
                    end = (i, j)

        Q = int(input().strip())
        results = []

        for _ in range(Q):
            data = input().split()
            C = int(data[0])
            commands = data[1]

            # 초기 상태
            x, y = start
            d = 0  # 위쪽

            # 명령어 실행
            for c in commands:
                if c == 'L':
                    d = (d + 3) % 4
                elif c == 'R':
                    d = (d + 1) % 4
                elif c == 'A':
                    nx, ny = x + directions[d][0], y + directions[d][1]
                    if 0 <= nx < N and 0 <= ny < N and field[nx][ny] != 'T':
                        x, y = nx, ny

            results.append("1" if (x, y) == end else "0")

        print(f"#{t} {' '.join(results)}")

solve()