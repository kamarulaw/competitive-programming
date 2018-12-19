
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class ALL518 { 
  
  public void solve() throws IOException { 
    // worked after deleting unnecessary Pair declaration
    int n = ni(); 
    int ax = ni(), ay = ni(), bx = ni(), by = ni(), cx = ni(), cy = ni(); 
    boolean[][] visited = new boolean[n + 1][n + 1];
    if (dfs(n,ax,ay,bx,by,cx,cy,visited))
      System.out.println("YES");
    else
      System.out.println("NO");
  }
  
  public boolean dfs(int n, int ax, int ay, int bx, int by, int cx, int cy, boolean[][] v) { 
    if (bx < 1 || bx > n || by < 1 || by > n)
      return false;
    if (v[bx][by] == true)
      return false; 
    v[bx][by] = true; 
    
    if (bx == ax || by == ay)
      return false; 
    if (Math.abs(bx - ax) == Math.abs(by - ay))
      return false;
    if (bx == cx && by == cy) 
      return true;
    return (dfs(n,ax,ay,bx,by-1,cx,cy,v) || dfs(n,ax,ay,bx,by+1,cx,cy,v) 
        || dfs(n,ax,ay,bx-1,by,cx,cy,v) || dfs(n,ax,ay,bx+1,by,cx,cy,v)
        || dfs(n,ax,ay,bx-1,by-1,cx,cy,v) || dfs(n,ax,ay,bx+1,by+1,cx,cy,v)
        || dfs(n,ax,ay,bx-1,by+1,cx,cy,v) || dfs(n,ax,ay,bx+1,by-1,cx,cy,v));
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
    new ALL518().run(); 
  }
}
