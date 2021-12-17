package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_829_queue;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
    static final int N = 100010;
    static int [] q = new int[N];
    static int hh = 0 , tt = -1;

    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.valueOf(br.readLine());
        while(n-- > 0){
            String [] op;
            op = br.readLine().split(" ");
            if(op[0].equals("query")){
                System.out.println(query());
            }else if(op[0].equals("push")){
                int x = Integer.valueOf(op[1]);
                push(x);
            }else if(op[0].equals("pop")){
                pop();
            }else{
                System.out.println(hh <= tt ? "NO" : "YES");
            }
        }
        br.close();
    }

    public static void push(int x){
        q[++tt] = x;
    }

    public static int query(){
        return q[hh];
    }

    public static void pop(){
        hh++;
    }
}
