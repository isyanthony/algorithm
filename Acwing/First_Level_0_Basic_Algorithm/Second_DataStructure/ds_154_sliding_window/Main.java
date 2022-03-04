package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_154_sliding_window;


import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

public class Main {

    static final int N = 1000100;
    static int [] q = new int[N];
    static int [] a = new int[N];
    public static void main(String[] args) throws IOException{
        // 利用 bufferReader 、bufferWriter 进行读入以及输出较为快 
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        String [] s = br.readLine().split(" ");
        int n = Integer.valueOf(s[0]);
        int k = Integer.valueOf(s[1]);
        String [] str = br.readLine().split(" ");
        for(int i = 0 ; i < n ; i++) a[i] = Integer.valueOf(str[i]);

        int tt = -1 , hh = 0;
        for(int i = 0 ; i < n ; i++){
            // 当队列中还有元素 并且 队头小于最小窗口起始下标 队头开始向后移动
            if(hh <= tt && i - k + 1 > q[hh]) hh++;
            // 当新加入元素小于队尾元素时，将队尾元素弹出，直至窗口中的元素单调递增
            while(hh <= tt && a[i] < a[q[tt]]) tt--;
            //将新的元素下标入队
            q[++tt] = i;
            //当能够装满窗口时开始输出第一个最小值
            if(i - k + 1 >= 0) bw.write(a[q[hh]]+" ");
        }
        bw.write("\n");
        tt = -1; hh = 0;
        for(int i = 0 ; i < n ; i++){
            if(hh <= tt && i - k + 1 > q[hh]) hh++;
            while(hh <= tt && a[i] > a[q[tt]]) tt--;
            q[++tt] = i;
            if(i - k + 1 >= 0) bw.write(a[q[hh]]+" ");
        }

        bw.flush();
        bw.close();
        br.close();

    }
    
}