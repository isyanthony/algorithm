n = int(input())
arr = list(map(int,input().split()))
temp = [0]*100010
j = 0
res = 0
for i in range(n):
    temp[arr[i]] += 1
    while temp[arr[i]] > 1:
        temp[arr[j]] -= 1
        j += 1   
    res = max(res,i-j+1)
print(res)