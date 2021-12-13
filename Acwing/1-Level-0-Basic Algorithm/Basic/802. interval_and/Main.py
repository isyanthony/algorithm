def find(array, x : int):
    """返回x在array中的下标"""
    l = 0
    r = len(array) - 1
    while l < r:
        mid = (l + r + 1) >> 1
        if array[mid] <= x:
            l = mid
        else:
            r = mid - 1
    return l + 1

nm = [int(i) for i in input().split()]
n, m = nm[0], nm[1]
adds = [] 
query = []
alls = [] # 待离散化的数据
a = [0 for i in range(3 * 100010)] # 离散化后的结果
for i in range(n):
    add = [int(i) for i in input().split()]
    adds.append(add)
    alls.append(add[0])
# print(adds)
for i in range(m):
    queryTemp = [int(i) for i in input().split()]
    query.append(queryTemp)
    alls.append(queryTemp[0])
    alls.append(queryTemp[1])
# 去重+排序
alls = list(set(alls))
alls = sorted(alls)
#处理插入
for item in adds:
    x = find(alls, item[0])
    a[x] += item[1]

# 计算前缀和
s = [0 for i in range(3 * 100010)]
for i in range(1, len(a)):
    s[i] = s[i - 1] + a[i]
# 处理查询
for item in query:
    l : int = find(alls, item[0])
    r : int = find(alls, item[1])
    print(s[r] - s[l - 1])
