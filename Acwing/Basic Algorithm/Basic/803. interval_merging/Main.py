import sys

if __name__ == '__main__':
    n = int(sys.stdin.readline())
    pos_list = []
    for _ in range(n):
        l, r = [int(x) for x in sys.stdin.readline().split(' ')]
        pos_list.append((l,r))
    pos_list = sorted(pos_list, key=lambda x:x[0])
    l = pos_list[0][0]
    r = pos_list[0][1]
    num = 1
    for x, y in pos_list:
        if x <= r:
            r = max(r, y)
        else:
            num += 1
            l = x
            r = y
    print(num)