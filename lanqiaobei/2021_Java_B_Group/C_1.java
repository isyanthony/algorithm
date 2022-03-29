 
 import java.util.List;
 import java.lang.Math;
 import java.util.stream.Collectors;
 import java.util.ArrayList;
 import java.lang.Integer;
 import java.lang.Long;
 
 

 public class C_1 {

 	static Long count = 0L;
 	static Long target = 2021041820210418L;
 	static List<Long> q = new ArrayList();

 	static void div(){
 		for(Long i = 1L ; i <=Math.sqrt(target) ; i++){
 			if(target % i == 0){
 				q.add(i);
 				q.add(target / i);
 			}
 		}
 		q = q.stream().distinct().collect(Collectors.toList());
 	}

 	public static void main(String[] args) {
 		div();
 		int size = q.size();
 		for(int i = 0; i < size ; i++){
 			for(int j = 0 ; j < size ; j++){
 				for(int k = 0 ; k < size ; k++){
 					if(q.get(i) * q.get(j) * q.get(k) == target){
 						count++;
 					}
 				}
 			}
 		}
 		System.out.println(count);
 	}

 	static void dfs(int pos , int size , long n){
 		if(size == 3){
 			if(n == target) count++;
 			return;
 		}

 		for(int i = pos ; i < q.size() ; i++){
 			dfs(0 , size + 1 , n * q.get(i));
 		}
 	}
 }