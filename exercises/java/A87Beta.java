
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 

public class A87Beta { 
  /* 
}
  boolean[] visited = new boolean[100000];
  public class Edge  { 
    public int from, to; 
    public Edge(int from, int to) { 
      this.from = from; 
      this.to = to; 
    }
    
  public void solve() throws IOException { 
    int n = ni();
    ArrayList<Edge>[] graph = (ArrayList<Edge>[]) new ArrayList[n + 1]; 
    for (int i = 1; i <= n; i++) {
      int immediate = ni(); 
      graph[i] = new ArrayList(); 
      graph[i].add(new Edge(immediate, i));
    }
    System.out.println(dfs(graph[1].get(0).to, graph));
  }
  
  public int dfs(int start, ArrayList<Edge>[] graph) {
    int cc = 0; 
    for (int i = 1; i <= graph.length; i++) {
       if (visited[graph[i].get(0).to] == false) { 
         visited[graph[i].get(0).to] = true; 
         dfs(graph[i].get(0).to, graph);
       }
       cc++;
    }
    return cc; 
  }*/
  
  public void solve() throws IOException { 
    //solution from online
    int n = ni(); 
    int[] parent = new int[2001];
    for (int i = 1; i <= n; i++) { 
      int curr = ni();
      parent[i] = curr; 
    }
    // find depth of tree
    // root of tree has parent -1
    int depth = -1; 
    for (int i = 1; i <= n; i++) { 
      int nodecount = 1; 
      int x = i; 
      while (parent[x] != -1) {
        x = parent[x];
        nodecount++; 
      }
      depth = Math.max(depth, nodecount);
    }
    System.out.println(depth);
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
    new A87Beta().run(); 
  }
}

