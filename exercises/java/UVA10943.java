import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class UVA10943 { 
  private int[][] memo = new int[110][110];
  
  public void solve() throws IOException { 
    System.out.println(ways_recursive(20, 10));
    System.out.println(ways_dp(20, 10));
    
  }
  
  public int ways_recursive(int n, int K) { 
    int total = 0; 
    if (K == 1)
      return total = 1; 
    else {
      for (int i = 0; i <= n; i++) 
        total += ways_recursive(n - i, K - 1);
    }
    return total; 
  }
  
  public int ways_dp(int n, int k) {
    //base case
    for (int i = 0; i <= n; i++)
      memo[i][1] = 1;
    //recursive case
    for (int i = 0; i <= n; i++)
      for (int j = 2; j <= k; j++)
        for (int x = 0; x <= i; x++)
          memo[i][j] += memo[i - x][j - 1];
    return memo[n][k];
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
    new UVA10943().run(); 
  }

}
