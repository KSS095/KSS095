def dfs(idx, prob):
    global max_prob

    if prob <= max_prob:    # 현재 확률이 이미 최댓값보다 작다면
        return
    if idx == N:  # 직원들에게 모든 일을 배정했으면 최댓값 갱신
        max_prob = max(max_prob, prob)
        return

    # idx번째 직원에게 남은 일 중 하나 배정
    for i in range(N):
        if not visited[i]:
            visited[i] = True
            # idx 하나 늘리고, 확률 계산하여 넘기기
            dfs(idx + 1, prob * (suc_prob[idx][i] / 100.0))
            visited[i] = False

T = int(input())
for tc in range(1, T + 1):
    N = int(input())
    suc_prob = [list(map(int, input().split())) for _ in range(N)]
    max_prob = 0.0  # 모든 일을 성공할 최대 확률
    visited = [False] * N

    dfs(0, 1.0)  # 처음 확률 1

    print(f'#{tc} {max_prob * 100:.6f}')