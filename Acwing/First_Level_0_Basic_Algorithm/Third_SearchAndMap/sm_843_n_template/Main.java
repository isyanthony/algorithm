import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main{

    static int n;
    static int N = 20;
    static boolean [] left = new boolean[2 * N];
    static boolean [] right = new boolean[2 * N];
    static char [][] path = new char[N][N];
    static boolean [] row = new boolean[N];
    static boolean [] col = new boolean[N];

    public static void main(String[] args) throws IOException {
        // System.out.println("Hello World");
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.valueOf(br.readLine());
        dfs(0 , 0 , 0);
        br.close();
    }

    public static void dfs(int r , int c , int s){
        if( s > n) return; 
        if( c == n) {c = 0;r ++;}
        if( r == n){
            if(s == n){
                for(int i = 0 ; i < n ; i++){
                    for(int j = 0 ; j < n ; j++){
                        System.out.print(path[i][j]);
                    }
                    System.out.println();
                }
                System.out.println();
            }
            return;
        }

        path[r][c] = '.';
        dfs(r , c + 1 , s);
        if(!row[r] && !col[c] && !left[r + c] && !right[r - c + 10]){
            row[r] = true; col[c] = true; left[r + c] = true; right[r - c + 10] = true;
            path[r][c] = 'Q';
            dfs(r , c + 1 , s + 1);
            path[r][c] = '.';
            row[r] = false; col[c] = false; left[r + c] = false; right[r - c + 10] = false;
        }
    }
}