import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class dp_max1Drangesum { 
  
  public void solve() throws IOException { 
    int[] A = { 4, -5, 4, -3, 4, 4, -4, 4, -5 };
    rsGreedy(A);
    rsDP(A); 
  }
  
  public void rsGreedy(int[] A) {
    int len = A.length;
    int sum = 0, ans = 0; 
    for (int i = 0; i < len; i++) { 
      sum += A[i]; 
      ans = Math.max(ans, sum);
      if (sum < 0) 
        sum = 0; 
    }
    System.out.println(ans);
  }
  
  public void rsDP(int[] A) {
    int sum = 0, len = A.length; 
    int[] memo = new int[len];
    memo[0] = A[0];
    int maxsum = memo[0];
    for (int i = 1; i < len; i++) { 
      sum += A[i];
      if (sum < 0)
        sum = 0; 
      memo[i] = sum; 
    }
    for (int i = 1; i < len; i++)
      maxsum = Math.max(maxsum, memo[i]);
    System.out.println(maxsum);
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
    solve(); 
  }

  public static void main(String args[]) throws IOException { 
    new dp_max1Drangesum().run(); 
  }

}
