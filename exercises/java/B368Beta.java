
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class B368Beta { 
  
  public void solve() throws IOException { 
    //incomplete
    int n = ni(); 
    int m = ni(); 
    int k = ni(); 
    int INF = Integer.MAX_VALUE; 
    int[][] g = new int[n + 1][n + 1];
    for (int i = 1; i <= n; i++) { 
      int u = ni(); 
      int v = ni();
      int l = ni(); 
      g[u][v] = l;
      g[v][u] = l;
    }
    int[] as = new int[k + 1];
    if (k > 0) { 
      for (int i = 1; i <= k; i++) 
        as[i] = ni(); 
    }
    int[][] dist = new int[n + 1][n + 1];
    Arrays.fill(dist, INF);
    
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
    new B368Beta().run(); 
  }
}

