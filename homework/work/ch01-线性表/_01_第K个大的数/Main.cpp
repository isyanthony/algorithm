#include<iostream>
using namespace std;
const int N = 1e5 + 10;
int a[N];


int unique(int a [] , int len){
    int j;
    for(int i = 1 , j = 1; i < len ; i++){
        while(a[i] == a[i - 1]){
            i++;
            if(i == len) return j;
        }
        a[j++] = a[i];
    }
    return j;
}

void quick_sort(int q [] , int l , int r){
    if( l >= r) return;

    int i = l - 1, j = r + 1 , k = q[l + r - 1 >> 1];
    while(i < j){
        do i++; while(q[i] < k);
        do j--; while(q[j] > k);
        if(i < j) swap(q[i] , q[j]);
    }
    quick_sort(q , l , j) , quick_sort(q , j + 1 , r);
}

int main(){
    int n , k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    quick_sort(a , 0 , n - 1);
    int end = unique(a , n);
    if(k - 1 > end) cout << "-1" << endl;
    else cout << a[k - 1] << endl;
}