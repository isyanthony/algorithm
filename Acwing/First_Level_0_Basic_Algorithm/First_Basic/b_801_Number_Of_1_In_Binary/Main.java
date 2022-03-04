package First_Level_0_Basic_Algorithm.First_Basic.b_801_Number_Of_1_In_Binary;

import java.util.Scanner;

public class Main{
    static int n;

    static int x;

    static int number = 0;
    public static void main(String[] args) {
        methodOne();
    }

    /**
     * Accept
     * lowbit函数:返回二进制数中从左到右最后一个1
     */
    public static void methodOne(){
        try (Scanner sc = new Scanner(System.in)) {
            n = sc.nextInt();
            while( n-- > 0){
                x = sc.nextInt();
                while( x > 0){
                    x -= (x & -x);
                    number++;
                }
                System.out.print(number + " ");
                number = 0;
            }
        }
    }
}