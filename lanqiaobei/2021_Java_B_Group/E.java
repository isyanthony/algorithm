
import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;


public class E {

	static final int MAX = 999999999;
	static final int N = 2030;
	static final int n = 2021;
	static boolean [] st = new boolean[N];
	static int [] dist = new int[N];
	static int [][] g = new int[N][N];

	static int gcd(int a , int b){
		return b > 0 ? gcd(b , a % b) : a;
	}

	static int lcm(int a , int b){
		return a / gcd(a , b) * b;
	}

	static int dijkstra(){
		Arrays.fill(dist , MAX);
		dist[1] = 0;
		for(int i = 0 ; i < 2021 ; i++){
			int t = -1;
			for(int j = 1 ; j <= 2021 ; j++){
				if(!st[j] && (t == -1 || dist[j] < dist[t])){
					t = j;
				}
			}
			st[t] = true;
			if(t == n) break;

			for(int j = 1 ; j <= 2021 ; j++){
				dist[j] = Math.min(dist[j], dist[t] + g[t][j]);
			}
		}

		return dist[2021];
	}

	public static void main(String[] args) {

		for(int i = 1 ; i <= 2021 ; i++){
			for(int j = 1 ; j <= 2021 ; j++){
				if(i == j){
					g[i][j] = 0;
				}else if(Math.abs(i - j) <= 21){
					g[i][j] = lcm(i , j);
				}else{
					g[i][j] = MAX; 
				}
			}
		}

		System.out.println(dijkstra());

		return;			
	}
}