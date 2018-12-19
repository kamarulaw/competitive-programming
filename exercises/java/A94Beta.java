
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer;
import java.util.ArrayList; 
import java.util.HashMap; 
import java.util.Arrays; 

public class A94Beta {
  
  public void solve() throws IOException {
    int n = ni(); 
    int m = ni();
    //ArrayList<ArrayList<Integer>> graph = new ArrayList<ArrayList<Integer>>();
    ArrayList<Integer>[] graph = (ArrayList<Integer>[]) new ArrayList[n + 1]; 
    for (int i = 0; i <= n; i++) 
      graph[i] = new ArrayList<Integer>(); 
    for (int i = 0; i < m; i++) {
      int a = ni();
      int b = ni(); 
      graph[a].add(b);
      graph[b].add(a);
    }
    int result = 0; 
    while (true) { 
      int rep = 0; 
      ArrayList<Integer> tmp = new ArrayList<Integer>();
      for (int i = 1; i <= n; i++) { 
        if (graph[i].size() == 1) { 
          rep++; 
          tmp.add(graph[i].get(0)); 
        }
      }
      if (rep > 0) { 
        result++; 
        for (int i = 0; i < rep; i++) { 
          int neighbor = graph[tmp.get(i)].get(0);
          graph[tmp.get(i)].clear();
        }
      }
      else 
        break; 
    }
    System.out.println(result);
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
    new A94Beta().run(); 
  }
}

