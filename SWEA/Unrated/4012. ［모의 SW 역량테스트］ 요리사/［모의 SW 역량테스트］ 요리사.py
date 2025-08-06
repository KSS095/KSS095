from itertools import permutations, combinations

T = int(input())
for tc in range(T):
    N = int(input())
    # 시너지 점수표
    synergy = [list(map(int, input().strip().split())) for _ in range(N)]
    # print(synergy)
    # print(list(range(N - 1)))
    # 식재료를 N / 2개로 나눈 조합들 생성
    # 왜 range(N - 1) 인지 좀 더 생각해보자
    comb_1 = list(combinations(range(N - 1), N // 2))
    # comb_1를 제외한 나머지를 comb_2에 저장
    comb_2 = [tuple(set(range(N)) - set(i)) for i in comb_1]

    # print(f'comb_1: {comb_1}')
    # print(f'comb_2: {comb_2}')

    synergy_1, synergy_2 = [], []
    for i in comb_1:
        synergy_1.append(list(permutations(i, 2)))
    for i in comb_2:
        synergy_2.append(list(permutations(i, 2)))

    # print(f'synergy_1: {synergy_1}')
    # print(f'synergy_2: {synergy_2}')

    # 시너지 점수표의 전체 합을 minimum 에 저장 (나올 수 있는 가장 큰 수)
    minimum = sum(map(sum, synergy))
    # 시너지 조합의 수만큼 반복
    for i in range(len(synergy_1)):
        synergy_1_score = 0
        synergy_2_score = 0
        # 각 시너지 조합을 시너지 점수표에서 찾아 더하기
        for j in range(len(synergy_1[i])):
            synergy_1_score += synergy[synergy_1[i][j][0]][synergy_1[i][j][1]]
            synergy_2_score += synergy[synergy_2[i][j][0]][synergy_2[i][j][1]]

        # 시너지 1과 2의 맛의 차이
        diff = abs(synergy_2_score - synergy_1_score)
        # 최솟값 갱신
        if minimum > diff:
            minimum = diff

    print(f'#{tc + 1} {minimum}')