package First_Level_0_Basic_Algorithm.First_Basic.b_803_interval_merging;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main{
    static int n , f , s , l , r;

    static List<Pair> list =new ArrayList<>();

    static List<Pair> res =new ArrayList<>();
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(System.in)) {
            n = sc.nextInt();
            while(n-- > 0){
                f = sc.nextInt();
                s = sc.nextInt();
                list.add(new Pair(f,s));
            }
        }
        Collections.sort(list , (a , b) -> {
            Pair  p1 = (Pair)a;
            Pair  p2 = (Pair)b;
            if( p1.first != p2.first) return p1.first - p2.first;
            return p1.second - p2.second; 
        });

        l = list.get(0).first;
        r = list.get(0).second;
        res.add(new Pair(l, r));
        for(int i = 1 ; i < list.size() ; i++){
            if(list.get(i).first > r){
                l = list.get(i).first;
                res.add(new Pair(l, list.get(i).second));
            }
            r = Math.max(r , list.get(i).second);
        }
        System.out.println(res.size());
    }
}

class Pair{

    int first;

    int second;

    public Pair(int first, int second) {
        this.first = first;
        this.second = second;
    }
    
}