package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_835_trip_statistics_string;



import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static final int N = 100010;
    static int [][] q = new int[N][26];
    static int idx = 0;
    static int [] cnt = new int[N];

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n;
        n = Integer.valueOf(br.readLine());
        while(n-- > 0){
            String [] str;
            str = br.readLine().split(" ");
            if(str[0].equals("I")){
                insert(str[1]);
            }else{
                System.out.println(query(str[1]));
            }
        }
        br.close();

    }

    public static void insert(String s){
        int t = 0;
        for(int i = 0 ; i < s.length() ; ++i){
            int u = s.charAt(i) - 'a';
            if( q[t][u] <= 0) q[t][u] = ++idx;
            t = q[t][u];
        }
        cnt[t]++;
    }

    public static int query(String s){
        int t = 0;
        for(int i = 0 ; i < s.length() ; ++i){
            int u = s.charAt(i) - 'a';
            if(q[t][u] <= 0) return 0;
            t = q[t][u];
        }
        return cnt[t];
    }
}
