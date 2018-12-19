import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 
public class Puzzles { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni();
    int INF = Integer.MAX_VALUE;
    int[] f = new int[m + 1];
    int[] memo = new int[m - n  + 2];
    for (int i = 1; i <= m; i++)
      f[i] = ni();
    Arrays.sort(f);
    Arrays.fill(memo, INF);
    for (int i = 1; i <= m - n + 1; i++) { 
      for (int j = i + n - 1; j <= m; j++) { 
        memo[i] = Math.min(f[j] - f[i], memo[i]);
      }
    }
    int ans = INF;
    for (int i = 1; i <= m - n + 1; i++) //unnecessary for loop
      ans = Math.min(ans, memo[i]);
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
    new Puzzles().run(); 
  }
}
