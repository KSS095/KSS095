# 구간 합으로 풀 경우 시간 초과 발생
# 구간 합은 세그먼트 트리로 풀어야 효율적임

# 세그먼트 트리 빌드 함수
def build():
    # 리프 노드에 값 설정
    for i in range(N):
        segment_tree[size + i] = numbers[i]
    
    # 부모 노드 계산
    for i in range(size - 1, 0, -1):
        segment_tree[i] = segment_tree[2 * i] + segment_tree[2 * i + 1]

# 구간 합 쿼리 함수
def range_sum(left, right):

    left += size - 1
    right += size - 1
    total = 0

    while left <= right:
        if left % 2 == 1:
            total += segment_tree[left]
            left += 1
        if right % 2 == 0:
            total += segment_tree[right]
            right -= 1
        left //= 2
        right //= 2

    return total

# 값 업데이트 함수
def update(index, value):
    # 리프 노드 업데이트
    index += size - 1
    segment_tree[index] = value

    # 부모 노드 업데이트
    while index > 1:
        index //= 2
        segment_tree[index] = segment_tree[2 * index] + segment_tree[2 * index + 1]


N, Q = map(int, input().split())
numbers = list(map(int, input().split()))

# 세그먼트 트리 초기화
size = 1
while size < N:
    size *= 2
segment_tree = [0] * (2 * size)

# 세그먼트 트리 빌드
build()

# Q개의 턴 처리
for _ in range(Q):
    x, y, a, b = map(int, input().split())

    # x ~ y까지의 합 구하기
    if x > y:
        x, y = y, x
    print(range_sum(x, y))

    # a번째 수를 b로 바꾸기
    update(a, b)