
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class B379 { 
  
  public void solve() throws IOException { 
    int k2 = ni(); 
    int k3 = ni(); 
    int k5 = ni(); 
    int k6 = ni(); 
    int result = 0; 
    int min256 = Math.min(Math.min(k5, k6), k2);
    result += (min256 * 256);
    k2 -= min256; 
    k5 -= min256; 
    k6 -= min256;
    int min32 = Math.min(k2, k3);
    result += (min32 * 32); 
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
    new B379().run(); 
  }
}
