package First_Level_0_Basic_Algorithm.First_Basic.b_799_Max_Length_distinct;


import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Scanner;
import java.util.stream.Collectors;

public class Main {
    public static void main(String[] args) throws IOException {
        // methodOne();
        methodTwo();
    }

    /**
     * TimeLimited
     * 
     * @throws NumberFormatException
     * @throws IOException
     */
    public static void methodOne() throws NumberFormatException, IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
        List<Integer> list = Arrays.stream(reader.readLine().split(" ")).map(item -> Integer.valueOf(item))
                .collect(Collectors.toList());
        reader.close();
        int j, target;
        int maxLength = 1;
        List<Integer> targetLength = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            targetLength.add(list.get(i));
            j = 1;
            while (i + j < n) {
                target = list.get(i + j);
                if (targetLength.indexOf(target) != -1) {
                    break;
                }
                targetLength.add(target);
                j++;
            }
            maxLength = Math.max(maxLength, targetLength.size());
            targetLength.clear();
        }
        System.out.println(maxLength);
    }

    /**
     * Accept
     * @throws IOException
     */
    public static void methodTwo() throws IOException {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] arr = new int[n + 1];
        int[] temp = new int[100010];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int res = 0, j = 0;
        for (int i = 0; i < n; i++) {
            temp[arr[i]]++;
            while (temp[arr[i]] > 1) {
                temp[arr[j]]--;
                j++;
            }
            res = Math.max(res, i-j+1);
        }
        sc.close();
        System.out.println(res);

    }
}