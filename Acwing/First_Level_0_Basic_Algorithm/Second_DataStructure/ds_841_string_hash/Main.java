package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_841_string_hash;


import java.util.Scanner;

public class Main{

    static final int N = 100010;
    static final int P = 131;
    static long [] p = new long[N];
    static long [] h = new long[N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n , m;
        n = sc.nextInt() ; m = sc.nextInt();
        char [] str = (" "+sc.next()).toCharArray();  
        p[0] = 1;
        for(int i = 1; i <= n ; i++){
            p[i] = p[i - 1] * P;
            h[i] = (h[i - 1] * P + str[i]);
        }
        int a , b ,c , d;
        while(m-- > 0){
            a = sc.nextInt(); b = sc.nextInt();
            c = sc.nextInt(); d = sc.nextInt();
            if(get(a , b) == get(c , d)) System.out.println("Yes");
            else System.out.println("No");
        }
        sc.close();
    }

    public static long get(int l , int r){
        return h[r] - h[l - 1] * p[r - l + 1];
    }
}