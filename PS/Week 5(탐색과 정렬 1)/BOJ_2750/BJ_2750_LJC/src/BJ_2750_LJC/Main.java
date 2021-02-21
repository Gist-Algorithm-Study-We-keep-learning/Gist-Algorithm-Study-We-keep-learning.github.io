package BJ_2750_LJC;
import java.io.*;
import java.util.Arrays;
public class Main {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringBuilder sb = new StringBuilder();
		int N = Integer.parseInt(br.readLine());
		int[] input = new int[N];
		for(int i = 0; i<N;i++) {
			input[i] = Integer.parseInt(br.readLine());
		}
		Arrays.sort(input);
		for(int i= 0;i<N;i++) {
			sb.append(input[i] + "\n");
		}
		System.out.print(sb);
	}

}
