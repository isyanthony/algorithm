
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;


public class Main{
    public static void main(String[] args) throws IOException {
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(reader.readLine());
        List<Integer> list = Arrays.stream(reader.readLine().split(" ")).map(item -> Integer.valueOf(item)).collect(Collectors.toList());
        reader.close();
        int j,target;
        int maxLength = 1;
        List<Integer> targetLength = new ArrayList<>();
        for(int i = 0 ; i < n ; i++){
            targetLength.add(list.get(i));
            j = 1;
            while(i+j < n){
                target = list.get(i+j);
                if(targetLength.indexOf(target)!=-1){
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
}