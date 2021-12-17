class LinkedList:
    def __init__(self):
        self.e = [0] * 100010
        self.ne = [0] * 100010
        self.idx = 0
        self.head = -1

    def add(self, k, e):
        self.e[self.idx] = e
        self.ne[self.idx] = self.ne[k]
        self.ne[k] = self.idx
        self.idx += 1

    def addFirst(self, e):
        self.e[self.idx] = e
        self.ne[self.idx] = self.head
        self.head = self.idx
        self.idx += 1

    def remove(self, k):
        if k == 0:
            self.head = self.ne[self.head]

        self.ne[k - 1] = self.ne[self.ne[k - 1]]

    def toString(self):
        res = ''
        cur = self.head
        while cur != -1:
            print(str(self.e[cur]), end=" ")
            cur = self.ne[cur]

if __name__ == '__main__':
    ll = LinkedList()
    n = int(input())
    for _ in range(n):
        inputs = list(input().split())
        if inputs[0] == 'H':
            ll.addFirst(int(inputs[1]))
        if inputs[0] == 'I':
            k = int(inputs[1])
            ll.add(k - 1, int(inputs[2]))
        if inputs[0] == 'D':
            k = int(inputs[1])
            ll.remove(k)



    ll.toString()