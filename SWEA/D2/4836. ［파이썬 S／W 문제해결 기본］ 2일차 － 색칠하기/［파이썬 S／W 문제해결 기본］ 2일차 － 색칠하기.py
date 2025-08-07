T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    red = set()     # 빨강색 칠할 좌표
    blue = set()    # 파랑색 칠할 좌표

    for _ in range(N):
        paint = list(map(int, input().split()))
        r1, c1, r2, c2 = paint[:4]
        # 칠해질 좌표
        coordinates ={(i, j) for i in range(r1, r2 + 1) for j in range(c1, c2 + 1)}

        if paint[4] == 1:   # 1이면 red에 해당 좌표 추가
            red.update(coordinates)
        else:               # 2이면 blue에 해당 좌표 추가
            blue.update(coordinates)

    purple = len(red & blue)    # red와 blue가 겹치면 purple
    print(f'#{tc} {purple}')