import java.util.Scanner;

public class Main {
    static int n , m;
    static final int N = 100010;
    static int [] a= new int[N];
    static int [] b= new int[N];
    public static void main(String[] args) {
        methodOne();
    }

    /**
     * Accept
     * Two point Algorithm
     */
    public static void methodOne(){
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        m = sc.nextInt();
        for(int i = 0 ; i < n ; i++) a[i] = sc.nextInt();
        for(int i = 0 ; i < m ; i++) b[i] = sc.nextInt();
        int i , j;
        i = j = 0;
        while(i < n && j < m){
            if(a[i] == b[j]) i++;
            j++;
        }
        if( i == n) System.out.println("Yes");
        else System.out.println("No");
        sc.close();
    }
}
