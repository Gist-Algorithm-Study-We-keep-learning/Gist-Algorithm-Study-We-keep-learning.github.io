package BJ_10815_LJC;
import java.io.*;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(br.readLine());
		int[] a = new int[N];
		String[] input_str = br.readLine().split(" ");
		for(int i = 0;i<N;i++) {
			a[i] = Integer.parseInt(input_str[i]);
		}
		Arrays.sort(a);
		int M = Integer.parseInt(br.readLine());
		String[] input_str2 = br.readLine().split(" ");
		int[] b = new int[M];
		for(int i = 0;i<M;i++) {
			b[i] = Integer.parseInt(input_str2[i]);
		}
		for(int i = 0; i<M;i++) {
			int start = 0;
			int end = N-1;
			int mid = (start+end)/2;
			int ans = 0;
			while(start<=end) {
				mid = (start+end)/2;
				if(a[mid] > b[i]) {
					end = mid - 1;
				}
				else if(a[mid] < b[i]) {
					start = mid+1;
				}
				else {
					ans = 1;
					break;
				}
			}
			sb.append(ans + " ");
		}
		System.out.print(sb);
	}
}
