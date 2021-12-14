import java.util.Scanner;

public class Main {

    static int n , t ;

    static double res;

    static final double basic = 1.00011;
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        t = sc.nextInt();
        res = methodOne(n, t);
        System.out.printf("%6f", res);
    }

    public static double methodOne(int n , int t){
        return n * Math.pow(basic, t);
    }
}
