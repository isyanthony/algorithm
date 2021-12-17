package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_831_kmp;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {
    static final int N = 100010;

    static int [] ne = new int[N];


    public static void main(String[] args) throws IOException{
        
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter log = new BufferedWriter(new OutputStreamWriter(System.out));
        int n = Integer.valueOf(br.readLine());
        char [] temp = br.readLine().toCharArray();
        int m = Integer.valueOf(br.readLine());
        char [] sear = br.readLine().toCharArray();
        for(int i = 1 , j = 0 ; i < n ; ++i){
            while(j != 0 && temp[i] != temp[j]) {
                j = ne[j - 1];
            }
            if(temp[i] == temp[j]) j++;
            ne[i] = j;
        }

        for(int i = 0 , j = 0 ; i < m ; ++i){
            while(j != 0 && sear[i] != temp[j]) j = ne[j - 1];
            if(sear[i] == temp[j]) j++;
            if( j == n){
                log.write(i - n + 1 + " ");
                j = ne[j - 1];
            }
        }
        log.flush();
        log.close();
        br.close();
    }
    
}
