package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_838_heap_sort;

import java.util.Scanner;

public class Main {
    static int n , m , cnt;
    static final int N = 100010;
    static int [] h = new int[N];

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        for(int i = 1 ; i <= n ; ++i){
            h[i] = sc.nextInt();
        }
        cnt = n;
        for(int i = n / 2 ; i > 0 ; --i){
            down(i);
        }    
        while(m-- > 0){
            System.out.println(h[1] + " ");
            h[1] = h[cnt--];
            down(1);
        }
        sc.close();
    }

    public static void down(int u){
        int t = u;
        if(2 * u <= cnt && h[2 * u] < h[t]) t = 2 * u;
        if(2 * u + 1 <= cnt && h[2 * u + 1] < h[t]) t = 2 * u + 1;
        if(t != u){
            h[t] ^= h[u];
            h[u] ^= h[t];
            h[t] ^= h[u];
            down(t);
        }
    }
    
}
