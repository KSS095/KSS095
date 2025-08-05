good_count = 0

n = int(input())

for _ in range(n):
    stack = []
    good_word = input()
    
    for ch in good_word:
        if stack and stack[-1] == ch: stack.pop()
        else: stack.append(ch)
        
    if not stack: good_count += 1

print(good_count)