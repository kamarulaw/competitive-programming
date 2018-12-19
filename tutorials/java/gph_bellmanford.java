import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer; 

public class gph_bellmanford { 
  private static int INF = 10000; 
  private static boolean bellmanford(ArrayList<Integer>[] adj, ArrayList<Integer>[] cost) {
    int len = adj.length; 
    int[] dist = new int[len];
    Arrays.fill(dist, INF);
    dist[0] = 0; 
    /* BF alg is run |V| - 1 times, but since the goal is to find 
     * the number of negative cycles we simply run the algorithm |V| times 
     * and add a stopping condition if the weights get updated on the |V|-th
     * iteration 
     */
    for (int i = 0; i < len; i++) {  
      for (int node = 0; node < len; node++) { 
        for (int k = 0; k < adj[node].size(); k++) { 
          if (dist[adj[node].get(k)] > dist[adj[node].get(k)] + cost[node].get(k)) { 
            dist[adj[node].get(k)] = dist[adj[node].get(k)] + cost[node].get(k);
            if (i == len - 1)
              return true; 
          }
        }
      }
    }
    return false;  
  }
  
  public void solve() throws IOException { 
    Scanner scanner = new Scanner(System.in);
    int n = scanner.nextInt();
    int m = scanner.nextInt();
    ArrayList<Integer>[] adj = (ArrayList<Integer>[])new ArrayList[n];
    ArrayList<Integer>[] cost = (ArrayList<Integer>[])new ArrayList[n];
    for (int i = 0; i < n; i++) {
        adj[i] = new ArrayList<Integer>();
        cost[i] = new ArrayList<Integer>();
    }
    for (int i = 0; i < m; i++) {
        int x, y, w;
        x = scanner.nextInt();
        y = scanner.nextInt();
        w = scanner.nextInt();
        adj[x - 1].add(y - 1);
        cost[x - 1].add(w);
    }
    System.out.println(bellmanford(adj, cost));
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
    new gph_bellmanford().run(); 
  }

}

