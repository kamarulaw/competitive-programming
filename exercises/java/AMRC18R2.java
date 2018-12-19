
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class AMRC18R2 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int s = ni(); 
    int[] a = new int[n + 1]; 
    int[] b = new int[n + 1];
    for (int i = 1; i <= n; i++) 
      a[i] = ni();
    for (int i = 1; i <= n; i++) 
      b[i] = ni(); 
    if (a[1] == 0) { 
      System.out.println("NO");
      return;
    }
    if (a[s] == 1) { 
      System.out.println("YES");
      return; 
    } else { 
      for (int i = s + 1; i <= n; i++)
        if (a[i] == 1 && b[i] == 1 && b[s] == 1) { 
          System.out.println("YES");
          return; 
        }
      System.out.println("NO");
    }
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
    new AMRC18R2().run(); 
  }
}

