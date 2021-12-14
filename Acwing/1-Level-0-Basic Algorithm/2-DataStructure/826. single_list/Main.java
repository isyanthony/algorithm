import java.util.ArrayList;
import java.util.Random;
import java.util.Scanner;

public class Main {

    static int [] v  = new int[100010]; 
    static int [] ne = new int[100050];
    static int head = -1 , idx = 0 , n , pos , x;
    static  String op;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        while(n-- > 0){
            op = sc.next();
            if("H".equals(op)){
                x = sc.nextInt();
                insertHead(x);
            }else if("I".equals(op)){
                pos = sc.nextInt();
                x = sc.nextInt();
                insert(pos, x);
            }else{
                pos = sc.nextInt();
                remove(pos);
            }

        }
        int i = head;
        while(i != -1){
            System.out.print(v[i] + " ");
            i = ne[i];
        }
        
    }

    public static void insertHead(int x){
        v[idx] = x;
        ne[idx] = head;
        head = idx++;
    }

    public static void insert(int pos , int x){
        v[idx] = x;
        ne[idx] = ne[pos - 1];
        ne[pos - 1] = idx++; 
    }

    public static void remove(int pos){
        if(pos == 0){
            head = ne[head];
            return;
        }
        ne[pos - 1] = ne[ne[pos - 1]];
    }
}

