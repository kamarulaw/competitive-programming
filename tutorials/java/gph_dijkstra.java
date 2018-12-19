import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer;
import java.util.Queue;
import java.util.Scanner;
import java.util.PriorityQueue; 
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Arrays; 


public class gph_dijkstra { 
  private static int INF = Integer.MAX_VALUE; 
  
  private static class ii implements Comparable<ii> {
    int key; 
    int value; 
    public ii(int key, int value) { 
      this.key = key; 
      this.value = value; 
    }
    public int compareTo(ii b) {
      return this.value - b.value;  
    }
  }
  
  private static int dijkstra(ArrayList<Integer>[] adj, ArrayList<Integer>[] cost, int s, int t) {
    int node, val; 
    int len = adj.length; 
    int[] dist = new int[len];
    Arrays.fill(dist, INF); 
    dist[s] = 0; 
    PriorityQueue <ii> pq = new PriorityQueue();
    pq.add(new ii(s, dist[s]));
    while (pq.size() != 0) { 
      ii top = pq.remove(); 
      node = top.key; 
      val = top.value; 
      for (int i = 0; i < adj[node].size(); i++) { 
        if (dist[adj[node].get(i)] > cost[node].get(i) + dist[node]) {
          pq.remove(top);
          dist[adj[node].get(i)] = cost[node].get(i) + dist[node];  
          pq.offer(new ii(adj[node].get(i), dist[adj[node].get(i)]));
        }
      }
    }
    return dist[t] == INF ? -1 : dist[t]; 
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
    int x = scanner.nextInt() - 1;
    int y = scanner.nextInt() - 1;
    System.out.println(dijkstra(adj, cost, x, y));
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
    new gph_dijkstra().run(); 
  }
}





