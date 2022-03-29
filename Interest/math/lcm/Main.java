public class Main{

	static int gcd(int m , int n){
		return n > 0 ? gcd(n , m % n) : m;
	}

	//求最小公倍数
	static int lcm(int m , int n){
		return m / gcd(m , n) * n;
	}

	public static void main(String[] args) {
		System.out.println(lcm(15 , 20));	
	}
}