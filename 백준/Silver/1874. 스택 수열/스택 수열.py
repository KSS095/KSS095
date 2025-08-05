stack = []
num = 0
res = []
possible = True

stack.append(num)
num += 1

n = int(input())

for _ in range(n):
    sequence = int(input())

    while stack[-1] < sequence:
        stack.append(num)
        num += 1
        res.append('+')
    
    if stack[-1] == sequence:  
        stack.pop()
        res.append('-')
    else: possible = False


if possible == False: print('NO')
else:
    for result in res:
        print(result)