s = int(input()) #input = series number

n = 0
ans = 0
for i in range(0, 10000000):
    if('666' in str(i)):
        n+=1
    
    if(s == n):
        ans = i
        break

print(ans)

#29380kb, 864ms