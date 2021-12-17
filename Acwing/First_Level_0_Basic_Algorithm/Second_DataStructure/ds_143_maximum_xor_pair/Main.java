package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_143_maximum_xor_pair;



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static final int N = 100010;
    static final int M = 310010;
    static int [][] p = new int[M][2];
    static String [] a;
    static int n , idx;

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        n = Integer.valueOf(br.readLine());
        a = br.readLine().split(" ");
        for(int i = 0; i < n ; ++i){
            insert(Integer.valueOf(a[i]));
        }

        int ans = 0;
        for(int i = 0 ; i < n ; ++i){
            ans = Math.max(ans, Integer.valueOf(a[i]));
        }
        System.out.println(ans);
        br.close();    
    }

    public static void insert(int x){
        int t = 0;
        for(int i = 30 ; i >= 0 ; --i){
            int u = x >> i & 1;
            if(p[t][u] <= 0) p[t][u] = ++idx;
            t = p[t][u];
        }
    }

    public static int query(int x){
        int t = 0 , res = 0;
        for(int i = 30 ; i >= 0 ; --i){
            int u = x >> 30 & 1;
            if(p[t][~u] > 0){
                res += 1 << i;
                t = p[t][~u];
            }else t = p[t][u];
        }
        return res;
    }
}
