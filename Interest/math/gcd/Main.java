public class Main {
	
	// 辗转相除法求最大公约数
	static int gcd_1(int m , int n){
		return n > 0 ? gcd_1(n , m % n) : m;
	}


	public static void main(String[] args) {
		System.out.println(gcd_1(25 , 15));
	}
}