def ones(x):
    count = 0
    while x:
        x -= x & -x
        count += 1
    return count

if __name__ == '__main__':
    n = int(input())
    number = list(map(int, input().split()))

    res = []
    for v in number:
        res.append(ones(v))

    print(' '.join(map(str, res)))

    
