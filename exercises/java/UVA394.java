import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Vector; 
import java.util.Arrays; 

public class UVA394 {
	
	public static void solve() throws IOException { 
		int N = ni(); 
		int R = ni(); 
		String s = ""; 
		String nl = ""; 
		StringBuilder res = new StringBuilder();
		String[] temp; 
		Vector<SpecialArray> vec = new Vector();
		for (int i = 0; i < N; i++) { 
			s = nextLine(); 
			String[] arr = s.split("\\s");
			vec.add(new SpecialArray(arr));
		}
		for (int i = 0; i < 4; i++) { 
			int val = 0; 
			nl = nextLine();
			temp = nl.split("\\s");
			temp = Arrays.copyOfRange(temp, 1, temp.length);
			
			res.append(temp[0]); 
			res.append("["); 
			int tl = temp.length; 
			for (int j = 1; j < tl - 2; j++)
				res.append(Integer.parseInt(temp[j]) + ", ");
			res.append(Integer.parseInt(temp[tl - 1]) + "] = "); 
			//add last value
		}
	}
	
	public static BufferedReader br; 
	public static StringTokenizer st; 
	public static PrintWriter out; 
	
	public static String nextToken() throws IOException {
		while(st == null || !st.hasMoreTokens()) 
			st = new StringTokenizer(br.readLine());
		return st.nextToken(); 
	}
	
	public static String nextLine() throws IOException {
		return br.readLine();
	}
	
	public static int ni() throws IOException {
		return Integer.parseInt(nextToken());
	}
	
	public static long nl() throws IOException {
		return Long.parseLong(nextToken());
	}
	
	public static double nd() throws IOException {
		return Double.parseDouble(nextToken());
	}

	public static void main(String args[]) throws IOException { 
		br = new BufferedReader(new InputStreamReader(System.in));
		out = new PrintWriter(new OutputStreamWriter(System.out));
		//br = new BufferedReader(new FileReader("in.txt"));
		//out = new PrintWriter(new FileWriter("out.txt"));
		solve(); 
		out.close();
	}
}

class SpecialArray { 
	String name = ""; 
	int B; 
	int CD; 
	int D; 
	int[] L= new int[D]; 
	int[] U = new int[D];
	int[] C = new int[D + 1];
	public SpecialArray(String[] arr){
		this.name = arr[0];
		this.B = Integer.parseInt(arr[1]); 
		this.CD = Integer.parseInt(arr[2]);
		this.D = Integer.parseInt(arr[3]);
		for (int i = 0; i < 2*D; i++) { 
			if (i % 2 == 0) 
				L[i] = Integer.parseInt(arr[i + 4]); 
			else 
				U[i] = Integer.parseInt(arr[i + 4]);
		}
		for (int i = D; i >= 1; i--) { 
			if (i == D) 
				C[i] = CD; 
			else 
				C[i] = C[i + 1] * (U[i - 1] - L[i - 1] + 1); 
		}
		C[0] = B; 
		for (int i = 1; i <= D; i++) 
			C[0] -= C[i] * L[i - 1]; 
	}
	
	public int[] getc() { 
		return this.C;
	}
}
