
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class B481 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int counter = 0; 
    boolean found = true; 
    String s = nextLine();
    String p = "xxx";
    for (int i = 0; i < n; i++) { 
      found = true; 
      for (int j = 0; j < p.length(); j++) { 
        if (i + j >= n || p.charAt(j) != s.charAt(i + j))
          found = false; 
      }
      if (found)
        counter++;
    }
    System.out.println(counter);
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
    new B481().run(); 
  }
}
