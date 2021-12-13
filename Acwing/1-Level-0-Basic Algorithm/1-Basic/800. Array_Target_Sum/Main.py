
def methdOne():
    n, m, x = map(int, input().split())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    j = len(b) - 1
    for i in range(len(a)):
        while j > 0 and a[i] + b[j] >= x:
            if a[i]+b[j] == x:
                print(str(i) + ' ' +str(j))
            j -= 1

