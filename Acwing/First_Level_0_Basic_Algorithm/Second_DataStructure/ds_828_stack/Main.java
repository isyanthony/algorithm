package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_828_stack;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static final int N  = 100010;
    static int [] st = new int[N]; 
    static int tt = 0;

    public static void main(String[] args) throws IOException {
        int n , x;
        String []op;
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.valueOf(br.readLine());
        while(n-- > 0){
            op = br.readLine().split(" ");
            if(op[0].equals("push")){
                x = Integer.valueOf(op[1]);
                push(x);
            }else if(op[0].equals("pop")){
                pop();
            }else if(op[0].equals("empty")){
                System.out.println(tt > 0 ? "NO" : "YES");
            }else if(op[0].equals("query")){
                int res = query();
                if( res != -1) System.out.println(res);
            }
        }
        br.close();
    }
    public static int query(){
        if(tt > 0){
            return st[tt];
        }
        return -1;
    }

    public static void push(int x){
        st[++ tt] = x;
    }

    public static void pop(){
        if(tt > 0) tt--;
    }


}
