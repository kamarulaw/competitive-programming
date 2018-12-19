import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays;
public class KefaAndFirstSteps { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int ans = 1;
    int[] a = new int[n + 1];
    int[] memo = new int[n + 1];
    Arrays.fill(memo, 1);
    for (int i = 1; i <= n; i++)
      a[i] = ni(); 
    for (int i = 2; i <= n; i++) 
      if (a[i] >= a[i - 1]) {
        memo[i] += memo[i - 1];
        ans = Math.max(ans, memo[i]);
      }
    System.out.println(ans);
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
    new KefaAndFirstSteps().run(); 
  }
}
