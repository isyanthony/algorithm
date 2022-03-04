package First_Level_0_Basic_Algorithm.First_Basic.b_800_Array_Target_Sum;

import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        methodOne();
    }

    /**
     * Accept
     * 利用HashMap存取速度为 1 的特性优化查询速度
     */
    public static void methodOne() {
        final int N = 100010;
        int n, m, x;
        int[] arrN = new int[N];
        Map<Integer, Integer> map = new HashMap<>(N);
        try (Scanner sc = new Scanner(System.in)) {
            n = sc.nextInt();
            m = sc.nextInt();
            x = sc.nextInt();
            for (int i = 0; i < n; i++) {
                arrN[i] = sc.nextInt();
            }
            for (int i = 0; i < m; i++) {
                map.put(sc.nextInt(), i);
            }
        }
        for (int i = 0; i < n; i++) {
            if (map.get(x - arrN[i]) != null) {
                System.out.println(i + " " + map.get(x - arrN[i]));
                break;
            }
        }
    }

    /**
     * Accept
     * 双指针算法
     */
    public static void methodTwo() {
        final int N = 100010;
        int n, m, x;
        int[] arrN = new int[N];
        int[] arrM = new int[N];
        try (Scanner sc = new Scanner(System.in)) {
            n = sc.nextInt();
            m = sc.nextInt();
            x = sc.nextInt();
            for (int i = 0; i < n; i++) {
                arrN[i] = sc.nextInt();
            }
            for (int i = 0; i < m; i++) {
                arrM[i] = sc.nextInt();
            }
        }
        int j = m - 1;
        for (int i = 0; i < n; i++) {
            while ( j > 0 && arrN[i] + arrM[j] >= x) {
                if (arrN[i] + arrM[j] == x) {
                    System.out.println(i + " " + j);
                    return;
                }
                j--;
            }
        }
    }

}