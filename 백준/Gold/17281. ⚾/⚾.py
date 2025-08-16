import sys
from itertools import permutations

N = int(sys.stdin.readline())
game = [list(map(int, sys.stdin.readline().split())) for _ in range(N)]

order = [i for i in range(1, 9)]  # 고정된 4번타자 제외하고 순서를 정해주자.
result = 0

for x in permutations(order, 8):  # 8명 순열 돌리기
    x = list(x)
    batter = x[:3] + [0] + x[3:]  # 1~3번 타자(랜덤 3명) / 4번 타자 (고정) / 4~8번 타자(랜덤 5명)
    number, point = 0, 0  # 타수와 점수
    for i in range(N):  # 각 이닝에 대해
        out = 0  # 이닝이 돌면 out은 0으로 초기화
        p1 = p2 = p3 = 0  # 1~3루의 현재 상태
        while out < 3:  # 쓰리아웃 전까지 반복
            # 각 안타에 맞게 루 세팅
            if game[i][batter[number]] == 0:
                out += 1
            elif game[i][batter[number]] == 1:
                point += p3
                p1, p2, p3 = 1, p1, p2
            elif game[i][batter[number]] == 2:
                point += p2 + p3
                p1, p2, p3 = 0, 1, p1
            elif game[i][batter[number]] == 3:
                point += p1 + p2 + p3
                p1, p2, p3 = 0, 0, 1
            elif game[i][batter[number]] == 4:
                point += p1 + p2 + p3 + 1
                p1, p2, p3 = 0, 0, 0

            number += 1  # 타순 증가
            if number == 9:  # 타순이 9가 되면
                number = 0  # 다시 0으로 초기화
    result = max(result, point)

print(result)