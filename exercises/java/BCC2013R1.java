
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 

public class BCC2013R1 {  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    int[] degrees = new int[n + 1];
    for (int i = 1; i <= m; i++) {
      int xi = ni(); 
      int yi = ni(); 
      degrees[xi]++; 
      degrees[yi]++; 
    }
    int c = 2; 
    int stardegree = n - 1; 
    for (int i = 1; i <= n; i++) { 
      if (degrees[i] == 2) { 
      } else if (degrees[i] == 1) {  
        c--; 
      } else if (m == n - 1 && degrees[i] == stardegree) {
        System.out.println("star topology");
        return; 
      } else { 
        System.out.println("unknown topology");
        return; 
      }
    }
    if (c == 0)
      System.out.println("bus topology");
    else 
      System.out.println("ring topology");
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
    new BCC2013R1().run(); 
  }
}

