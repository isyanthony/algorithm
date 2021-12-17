package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_827_double_list;

import java.util.Scanner;

public class Main {
    static final int N = 100010;
    static int [] l = new int[N];
    static int [] r = new int[N];
    static int [] v = new int[N];
    static int idx = 2;

    public static void main(String[] args) {
        l[1] = 0;
        r[0] = 1;

        Scanner sc = new Scanner(System.in);
        int m , pos , x;
        String op;
        m = sc.nextInt();
        while(m-- > 0){
            op = sc.next();
            switch(op){
                case "R" :
                    x = sc.nextInt();
                    insert(l[1], x);
                    break;
                case "L":
                    x = sc.nextInt();
                    insert(0, x);
                    break;
                case "D":
                    pos = sc.nextInt();
                    remove(pos);
                    break;
                case "IR":
                    pos = sc.nextInt();
                    x = sc.nextInt();
                    insert(pos + 1, x);
                    break;
                default: 
                    pos = sc.nextInt();
                    x = sc.nextInt();
                    insert(l[pos + 1] , x);

            }
        }
        int i = r[0];
        while(i != 1){
            System.out.print(v[i] + " ");
            i = r[i];
        }
    }

    public static void insert(int pos , int x){
        v[idx] = x;
        r[idx] = r[pos];
        l[idx] = pos;
        l[r[pos]] = idx;
        r[pos] = idx++;
    }

    public static void remove(int pos){
        pos++;
        l[r[pos]] = l[pos];
        r[l[pos]] = r[pos];
    }

}
