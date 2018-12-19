
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A395 { 
  
  public void solve() throws IOException {
    int n = ni(), m = ni(), z = ni(); 
    int counter = 1; 
    if (n == m) { 
      System.out.println(z);
      return; 
    }
    if (n == 1) { 
      System.out.println(m);
      return; 
    }
    if (m % n == 0){ 
      System.out.println(z);
      return; 
    }
    while (m % n == 0) { 
      m += m; 
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
    new A395().run(); 
  }
}

