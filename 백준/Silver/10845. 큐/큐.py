import sys
input = sys.stdin.readline

N = int(input())
queue = []
front_idx = 0

for _ in range(N):
    cmd = input().split()
    
    if cmd[0] == 'push':
        queue.append(int(cmd[1]))
    elif cmd[0] == 'pop':
        if front_idx >= len(queue):
            print(-1)
        else:
            print(queue[front_idx])
            front_idx += 1
    elif cmd[0] == 'size':
        print(len(queue) - front_idx)
    elif cmd[0] == 'empty':
        print(1 if front_idx >= len(queue) else 0)
    elif cmd[0] == 'front':
        print(-1 if front_idx >= len(queue) else queue[front_idx])
    elif cmd[0] == 'back':
        print(-1 if front_idx >= len(queue) else queue[-1])