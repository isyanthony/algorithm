
import java.util.List;
import java.lang.Math;
import java.util.stream.Collectors;
import java.util.ArrayList;
import java.lang.Integer;
import java.lang.Long;
import java.util.Arrays;


public class C_2 {

	static int size = 0; 
	static Long count = 0L;
	static Long target = 2021041820210418L;
	static List<Long> q = new ArrayList();

	static void div() {
		for (Long i = 1L ; i <= Math.sqrt(target) ; i++) {
			if (target % i == 0) {
				q.add(i);
				q.add(target / i);
			}
		}
		q = q.stream().distinct().collect(Collectors.toList());
	}

	public static void main(String[] args) {
		div();
		dfs(1L);
		System.out.println(count);
	}

	static void dfs(Long n) {
		if (size == 3) {
			if (n.equals(target)) {
				count += 1L;
			}
			return;
		}
		for (int i = 0 ; i < q.size() ; i++) {
			if (n * q.get(i) > target) continue;
			size += 1;
			dfs(n * q.get(i));
			size -= 1;
		}	
	}
}