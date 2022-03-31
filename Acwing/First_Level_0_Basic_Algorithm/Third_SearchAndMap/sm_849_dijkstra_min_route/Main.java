import java.util.Scanner;
import java.lang.Math;
import java.util.Arrays;



public class Main {
	
	static final int N = 510;
	static int g[][] = new int[N][N];
	static int dist[] = new int[N];
	static boolean st[] = new boolean[N];
	static int n , m;


	static int dijkstra(){
		Arrays.fill(dist , 0x3f3f);
		dist[1] = 0;

		for(int i = 0 ; i < n ; i++){
			int t = -1;
			for(int j = 1 ; j <= n ; j++){
				if(!st[j] && (t == -1 || dist[t] > dist[j])){
					t = j;
				}
			}

			st[t] = true;

			for(int j = 1 ; j <= n ;j++){
				dist[j] = Math.min(dist[j] , dist[t] + g[t][j]);
			}
		}

		if(dist[n] == 0x3f3f) return -1;
		else return dist[n];
	}


	public static void main(String[] args) {
		Scanner sc  = new Scanner(System.in);				
		n = sc.nextInt(); m = sc.nextInt();

		for(int i = 1 ; i <= n ; i++) Arrays.fill(g[i] , 0x3f3f);
		while(m-- > 0){
			int a = sc.nextInt(); int b = sc.nextInt(); int c = sc.nextInt();
			g[a][b] = Math.min(g[a][b], c);
		}
		System.out.println(dijkstra());
	}
}