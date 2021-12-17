# 数据结构

## 链表

### 单链表

```c++
#include<iostream>
using namespace std;

const int N = 100010;
// head 表示头节点, 不存在节点为 -1
// idx 表示可用节点
// v 存储节点值 ne表示下一个节点的下标
int v[N] , ne[N] , head , idx;

void init(){
    head = -1;
    idx = 0;
}
// 插入头节点位置
void add_to_head(int x){
    v[idx] = x , ne[idx] = head , head = idx++;
}

// 插入节点
void set(int pos , int x){
    v[idx] = x , ne[idx] = ne[pos - 1] , ne[pos - 1] = idx++;
}
// 删除节点
void remove(int pos){
    ne[pos - 1] = ne[ne[pos - 1]];
}

    
```



### 双向链表

```c++
// l , r 分别存储左右指针, v 表示存储值 , idx 表示可用下标
int l[N],r[N],v[N],idx;

void init(){
    idx = 2;
    l[1] = 0;
    r[0] = 1;
}

// 在节点a的右边插入一个数x
void insert(int a, int x)
{
    v[idx] = x;
    l[idx] = a, r[idx] = r[a];
    l[r[a]] = idx, r[a] = idx ++ ;
}

// 删除节点a
void remove(int a)
{
    l[r[a]] = l[a];
    r[l[a]] = r[a];
}
```



## 栈

```c++
// tt表示栈顶
int stk[N], tt = 0;

// 向栈顶插入一个数
stk[ ++ tt] = x;

// 从栈顶弹出一个数
tt -- ;

// 栈顶的值
stk[tt];

// 判断栈是否为空
if (tt > 0)
{

}
```



### 单调栈

```c++
//常见模型：找出每个数左边离它最近的比它大/小的数
int tt = 0;
for (int i = 1; i <= n; i ++ )
{
    while (tt && check(stk[tt], i)) tt -- ;
    stk[ ++ tt] = i;
}
```



## 队列

### 普通队列

```c++
// hh 表示队头，tt表示队尾
int q[N], hh = 0, tt = -1;

// 向队尾插入一个数
q[ ++ tt] = x;

// 从队头弹出一个数
hh ++ ;

// 队头的值
q[hh];

// 判断队列是否为空
if (hh <= tt)
{

}
```

### 循环队列

```c++
// hh 表示队头，tt表示队尾的后一个位置
int q[N], hh = 0, tt = 0;

// 向队尾插入一个数
q[tt ++ ] = x;
if (tt == N) tt = 0;

// 从队头弹出一个数
hh ++ ;
if (hh == N) hh = 0;

// 队头的值
q[hh];

// 判断队列是否为空
if (hh != tt)
{

}
```

### 单调队列

```c++
//常见模型：找出滑动窗口中的最大值/最小值
int hh = 0, tt = -1;
for (int i = 0; i < n; i ++ )
{
    while (hh <= tt && check_out(q[hh])) hh ++ ;  // 判断队头是否滑出窗口
    while (hh <= tt && check(q[tt], i)) tt -- ;
    q[ ++ tt] = i;
}
```



## KMP

```c++
// s[]是长文本，p[]是模式串，n是s的长度，m是p的长度
求模式串的Next数组：
for (int i = 2, j = 0; i <= m; i ++ )
{
    while (j && p[i] != p[j + 1]) j = ne[j];
    if (p[i] == p[j + 1]) j ++ ;
    ne[i] = j;
}

// 匹配
for (int i = 1, j = 0; i <= n; i ++ )
{
    while (j && s[i] != p[j + 1]) j = ne[j];
    if (s[i] == p[j + 1]) j ++ ;
    if (j == m)
    {
        j = ne[j];
        // 匹配成功后的逻辑
    }
}
```

