def change_dir(dr, dc, direction):
    if direction == 'L':  # 반시계: (x,y) -> (-y,x)
        return -dc, dr
    else:                 # 시계:   (x,y) -> (y,-x)
        return dc, -dr


from collections import deque

board_width = int(input())  # 보드의 크기 (2 <= 크기 <= 100)

# 뱀의 몸을 저장하는 덱 (머리가 앞(left), 꼬리가 뒤(right))
snake_body = deque([(1, 1)])
# 현재 뱀이 차지하고 있는 보드 (1-based 이므로 시작은 (1, 1))
snake_range = {(1, 1)}

apples = int(input())   # 사과의 개수 (0 <= 개수 <= 100)
apples_pos = set()  # 사과 위치 저장할 set

for _ in range(apples): # 사과 개수만큼 입력 받기
    r, c = map(int, input().split())
    apples_pos.add((r, c))

switch_count = int(input()) # 방향 전환 횟수
snake_direction_change = [] # 방향 전환 정보 저장 리스트

for _ in range(switch_count):   # 방향 전환 횟수만큼 입력 받기
    snake_direction_change.append(list(input().split()))

second = 0  # 게임이 끝나는 시간
switch_idx = 0  # 현재까지 방향 전환 횟수
# 처음엔 오른쪽으로
dr, dc = 0, 1

while True:
    # 방향 전환 시간과 방향 저장
    if switch_idx < switch_count:
        time_to_change, direction = snake_direction_change[switch_idx]
        # 방향을 전환할 시간이 됐다면
        if second == int(time_to_change):
            dr, dc = change_dir(dr, dc, direction)
            switch_idx += 1

    second += 1  # 1초 경과

    head_r, head_c = snake_body[0]  # 뱀의 머리 위치
    nr, nc = head_r + dr, head_c + dc   # 다음 머리 위치

    # 벽에 꿍했다면 종료
    if not (1 <= nr <= board_width and 1 <= nc <= board_width): break

    # 나와 충돌했다면 종료
    if (nr, nc) in snake_range: break

    # 새 머리 위치 추가
    snake_body.appendleft((nr, nc))
    snake_range.add((nr, nc))

    if (nr, nc) in apples_pos:  # 머리 위치에 사과가 있다면
        apples_pos.remove((nr, nc)) # 꼬리는 자르지 않고 사과만 제거
    else:   # 사과가 없다면
        tail_r, tail_c = snake_body.pop()   # 꼬리 자르고
        snake_range.remove((tail_r, tail_c))    # 뱀이 차지하고 있는 보드에서도 제거

print(second)
