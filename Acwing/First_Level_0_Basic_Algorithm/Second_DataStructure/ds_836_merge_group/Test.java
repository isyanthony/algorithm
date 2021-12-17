package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_836_merge_group;


import java.util.*;

public class Test{
    static int n, m;
    static int N = 100010;
    static int[] p = new int[N];


    public static int find(int x){
        if(x != p[x]) p[x] = find(p[x]);
        return p[x];
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        for(int i = 0; i < n; i ++) p[i] = i;

        String opt;
        int a, b;
        while(m -- > 0){
            opt = sc.next();
            a = sc.nextInt();
            b = sc.nextInt();
            if(opt.equals("M")) p[find(a)] = find(b);
            else{
                if(find(a) == find(b)) System.out.println("Yes");
                else System.out.println("No");
            }
        }
        sc.close();
    }
}