import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class Taxi { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] sc = new int[n + 1];
    for (int i = 1; i <= n; i++)
      sc[i] = ni();
    Arrays.sort(sc);
    int s = 1; 
    int e = n;
    int numtaxis = 0; 
    while (s <= e) { 
      int curr = sc[e];
      e--;
      while (s <= e && curr + sc[s] <= 4) { 
        curr += sc[s];
        s++; 
      }
      curr = 0; 
      numtaxis++; 
    }
    System.out.println(numtaxis);
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
    new Taxi().run(); 
  }

}
