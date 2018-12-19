import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class dp_lis { 
  
  public void solve() throws IOException { 
    int[] arr = {-7, 10, 9, 2, 3, 8, 8, 1};
    int len = arr.length; 
    int[] memo = new int[len];
    Arrays.fill(memo, 1); // O(n)
    for (int i = 1; i < len; i++) 
      for (int j = 0; j < i; j++) 
        if (arr[j] < arr[i] && 1 + memo[j] > memo[i])  
          memo[i] = 1 + memo[j];
    int lis = memo[0]; 
    for (int i = 1; i < len; i++) 
      lis = Math.max(lis, memo[i]);
    System.out.println(lis);
  }
  
  public void outputMemo(int[] memo) {
    for (int i = 0; i < memo.length; i++)
      System.out.print(memo[i] + " ");
  }
  
  public BufferedReader br; 
  public StringTokenizer st; 
  public PrintWriter out; 
  
  public String nextToken() throws IOException {
    while(st == null || !st.hasMoreTokens()) 
      st = new StringTokenizer(br.readLine());
    return st.nextToken(); 
  }

  public String nextLine() throws IOException {
    return br.readLine();
  }
  
  public int ni() throws IOException {
    return Integer.parseInt(nextToken());
  }
  
  public long nl() throws IOException {
    return Long.parseLong(nextToken());
  }
  
  public double nd() throws IOException {
    return Double.parseDouble(nextToken());
  }

  public void run() throws IOException { 
    br = new BufferedReader(new InputStreamReader(System.in));
    out = new PrintWriter(new OutputStreamWriter(System.out));
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    //out.close(); 
  }

  public static void main(String args[]) throws IOException { 
    new dp_lis().run(); 
  }

}
