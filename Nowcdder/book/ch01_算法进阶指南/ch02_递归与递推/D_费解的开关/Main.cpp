#include<iostream>
#include<cstring>
using namespace std;

int n;
char g[10][10] , backup[10][10];
int dx[5] = {0 , 1 , -1 , 0 , 0} , dy[5] = {0 , 0 , 0 , 1 , -1};

void turn(int x , int y){
    for(int i = 0 ; i < 5 ; i++){
        int a = x + dx[i] , b = y + dy[i];
        if(a < 0 || a >= 5 || b < 0 || b >= 5) continue;
        g[a][b] ^= 1;
    }
}


int work(){
    int Min = 1e7;
    for(int i = 0 ; i < 1 << 5 ; i++){
        int res = 0;
        memcpy(backup , g , sizeof g);
        for(int j = 0 ; j < 5 ; j++){
            if(i >> j & 1){
                turn(0 , j);
                res++;
            }
        }

        for(int h = 0 ; h < 4 ; h++){
            for(int l = 0 ; l < 5 ; l++){
                if(g[h][l] == '0'){
                    turn(h + 1 , l);
                    res++;
                }
            }
        }

        bool success = true;

        for(int t = 0 ; t < 5 ; t++){
            if(g[4][t] == '0'){
                success = false;
                break;
            }
        }

        if(success) Min = min(res , Min);


        memcpy(g , backup , sizeof g);

    }
    return Min > 6 ? -1 : Min;
}


int main(){
    cin >> n;
    while(n--){
        for(int i = 0 ; i < 5 ; i++){
            cin >> g[i];
        }
        int res = work();
        cout << res << endl;
    }
}