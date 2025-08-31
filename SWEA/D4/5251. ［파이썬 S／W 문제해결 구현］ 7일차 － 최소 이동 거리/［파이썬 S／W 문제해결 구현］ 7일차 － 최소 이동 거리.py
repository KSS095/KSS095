import heapq


def calc_min_distance(vertex, start):
    distances = {v: float('inf') for v in vertex}
    distances[start] = 0
    visited = set()

    heap = []
    heapq.heappush(heap, [0, start])

    while heap:
        dist, current = heapq.heappop(heap)
        if distances[current] < dist or current in visited: continue
        visited.add(current)

        for next, weight in vertex[current].items():
            if dist + weight < distances[next]:
                distances[next] = dist + weight
                heapq.heappush(heap, [dist + weight, next])

    return distances


T = int(input())
for tc in range(1, T + 1):
    V, E = map(int, input().split())
    vertex = {v: {} for v in range(V + 1)}

    for _ in range(E):
        s, e, w = map(int, input().split())
        vertex[s][e] = w

    start = 0
    distances = calc_min_distance(vertex, start)
    print(f'#{tc} {distances[V]}')
