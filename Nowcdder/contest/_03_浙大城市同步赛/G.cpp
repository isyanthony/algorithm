#include<iostream>
using namespace std;
const int N = 35;
int ch[N] , Max = -1;
char mCh = 'Z';
int main(){
    int n;
    for(int i = 0 ; i < n ; i++){
        string s;
        cin >> s;
        ch[s[0] - 'A'] ++;
        // cout << ch[c - 'A'] << endl;
        if(ch[s[0] - 'A'] > Max || (ch[s[0] - 'A'] == Max && (s[0] - 'A') <= (mCh - 'A'))){
            Max = ch[s[0] - 'A'];
            mCh = s[0];
        }
    }
    cout << mCh << endl;
    return 0;
}