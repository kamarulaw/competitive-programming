
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A376 { 
  
  public void solve() throws IOException { 
    String str = nextLine(); 
    char[] chars = str.toCharArray(); 
    int tot = 0;
    int d1 = Math.abs((int)'a' - (int)chars[0]);
    int d2 = 26 - d1; 
    tot += Math.min(d1, d2);
    for (int i = 0; i < chars.length - 1; i++) { 
      d1 = Math.abs((int)chars[i] - (int)chars[i + 1]);
      d2 = 26 - d1;
      tot += Math.min(d1, d2);
    }
    System.out.println(tot);
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
    new A376().run(); 
  }
}
