import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{

    static int n , res = 0;
    static int N = 10;
    static int [] path = new int[N];
    static boolean [] vt = new boolean[N];
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.valueOf(br.readLine().toString());
        dfs(0);
        br.close();
    }

    public static void dfs(int s){
        if(s == n){
            for(int i = 0 ; i < n ; i ++){
                System.out.print(path[i]+" ");
            }
            System.out.println();
        }
        for(int i = 1 ; i <= n ; i ++){
            if(!vt[i]){
                vt[i] = true;
                path[s] = i;
                dfs(s + 1);
                vt[i] = false;
            }
        }
    }
}