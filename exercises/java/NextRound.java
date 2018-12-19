import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class NextRound { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int k = ni(); 
    int[] as = new int[n + 1];
    for (int i = 1; i <= n; i++)
      as[i] = ni();
    int b = k; 
    int numadvance = k; 
    if (as[b] == 0) { 
      while (b >= 1 && as[b] == 0) {
        b--;
        numadvance--; 
      }
      System.out.println(numadvance);
      return; 
    } else { 
      int i = b + 1; 
      while (i <= n && as[b] == as[i]) { 
        i++;
        numadvance++; 
      }
      System.out.println(numadvance);
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
    new NextRound().run(); 
  }
}
