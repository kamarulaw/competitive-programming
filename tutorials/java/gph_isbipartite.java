import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.StringTokenizer; 
import java.util.Arrays; 
import java.util.Queue; 
import java.util.LinkedList; 

public class gph_isbipartite {   
  public boolean isBipartite(ArrayList<Integer>[] G) {
    int len = G.length; 
    int[] colorarr = new int[len];
    Arrays.fill(colorarr, -1);
    colorarr[0] = 0; 
    Queue<Integer> Q = new LinkedList<Integer>();
    Q.add(0);
    while(Q.size() != 0) { 
      int top = Q.remove(); 
      for (int i = 0; i < G[top].size(); i++) { 
        if (colorarr[G[top].get(i)] == -1)
          colorarr[G[top].get(i)] = colorarr[top] == 1 ? 0 : 1;
        else if (colorarr[G[top].get(i)] == colorarr[top])
          return false; 
      }
    }
    return true; 
  }
  
  public void solve() throws IOException {
    int n = ni(); 
    int m = ni(); 
    ArrayList<Integer>[] G = (ArrayList<Integer>[])new ArrayList[n];
    for (int i = 0; i < n; i++) 
      G[i] = new ArrayList<Integer>();
    for (int i = 0; i < m; i++) { 
      int u = ni(); // u \in [1, n]
      int v = ni(); // v \in [1, n]
      G[u - 1].add(v - 1); 
      G[v - 1].add(u - 1);
    }
    System.out.println(isBipartite(G));
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
    new gph_isbipartite().run(); 
  }

}
