import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A268 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    boolean[] levels = new boolean[n + 1]; 
    int p = ni(); 
    for (int i = 0; i < p; i++) 
      levels[ni()] = true; 
    int q = ni(); 
    for (int i = 0; i < q; i++) 
      levels[ni()] = true; 
    for (int i = 1; i <= n; i++) { 
      if (levels[i] == false) { 
        System.out.println("Oh, my keyboard!");
        return; 
      }
    }
    System.out.println("I become the guy.");
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
    new A268().run(); 
  }
}


