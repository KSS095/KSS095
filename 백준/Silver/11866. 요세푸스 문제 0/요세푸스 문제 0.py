from queue import Queue
perm = Queue()

N, K = map(int, input().split())

for person in range(1, N + 1):
    perm.put(person)

print('<', end='')

while(True):
    for _ in range(K - 1):
        perm.put(perm.get())

    remove = perm.get()
    
    if not perm.empty():
        print(f'{remove}, ', end='')
    else:
        print(remove, end='')
        break

print('>')