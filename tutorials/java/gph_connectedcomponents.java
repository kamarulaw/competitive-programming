import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.StringTokenizer; 

public class gph_connectedcomponents { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    ArrayList<Integer>[] G = (ArrayList<Integer>[])new ArrayList[n];
    for (int i = 0; i < n; i++) 
      G[i] = new ArrayList<Integer>();
    for (int i = 0; i < m; i++) { 
      int u = ni();
      int v = ni(); 
      G[u - 1].add(v - 1); 
      G[v - 1].add(u - 1);
    }
  }
  
  private boolean[] visited = new boolean[1000];
  public int connectedComponents(ArrayList<Integer>[] G) {
    int cc = 0; 
    int len = G.length; 
    for (int i = 0; i < len; i++) { 
      if (visited[i] == false) {
         explore(G, i);
         cc++; 
      }
    }
    return cc; 
  }
  
  public void explore(ArrayList<Integer>[] G, int i) {
    visited[i] = true; 
    for (int j = 0; j < G[i].size(); j++) {
      if (visited[G[i].get(j)] == false) { 
        explore(G, j);
      }
    }
    return; 
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
    new gph_connectedcomponents().run(); 
  }
}
