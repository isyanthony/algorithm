#include<iostream>
using namespace std;


class test {
    public:
        int x;  
        test(){
            cout << x << endl;
        }
        test(int w ){
            x = w;
            cout << "c c :" << w << endl;
        }
        virtual void ttt(){
            cout << "¸¸Àà" << endl;
        }
};

class newtest : public test {
    public:
        int t = 2;
        double tt = 2.0;
        newtest(int w , double s){
            t = w , tt = s;
        }

        void ttt(){
            cout << "×ÓÀà" << endl;
        }
};

int main(){
    
    test * tt = new test[2];
    tt[1] = test(5);

    return 0;
}