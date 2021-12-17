package First_Level_0_Basic_Algorithm.Second_DataStructure.ds_3302_expression_evaluation;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Map;
import java.util.Stack;

public class Main {
 
    static Stack<Character> op = new Stack<>();
    static Stack<Integer> n = new Stack<>();
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        char [] str = br.readLine().strip().toCharArray();
        int len = str.length;
        Map<Character,Integer> pr = new HashMap<Character,Integer>(){{
            put('+', 1);
            put('-', 1);
            put('*', 2); 
            put('/', 2);
        }};
        for(int i = 0 ; i < len ; ++i){
            char c = str[i];
            if(Character.isDigit(c)){
                int num = str[i] - '0';
                int j = i + 1;
                while(j < len && Character.isDigit(str[j]) ){
                    num = num * 10 + str[j] - '0';
                    j++;
                }
                i = j - 1;
                n.push(num);
            }else{
                if(c == '(') op.push(c);
                else if( c == ')'){
                    while(op.peek() != '(') calculate();
                    op.pop();
                }else{
                    while(!op.empty() && op.peek() != '('&& pr.get(op.peek()) >= pr.get(c))  calculate();
                    op.push(c);
                }
            }
        }
        br.close();
        while(op.size() > 0) calculate();
        System.out.println(n.pop());
    }

    public static void calculate(){
        int b = n.peek(); n.pop();
        int a = n.peek(); n.pop();
        char ops = op.peek(); op.pop();
        int res = 0;
        switch(ops){
            case '+': res = a + b ; break;
            case '-': res = a - b ; break;
            case '*': res = a * b ; break;
            case '/': res = a / b ; break;
        }
        n.push(res);
    }
}
