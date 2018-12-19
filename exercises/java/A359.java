
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A359 { 
  
  public void solve() throws IOException { 
    long n = ni(); 
    long stored = ni(); 
    int distressed = 0; 
    for (int i = 0; i < n; i++) { 
      String[] curr = nextLine().split("\\s+");
      char c = curr[0].charAt(0);
      long ci = Integer.parseInt(curr[1]);
      if (c == '+')
        stored += ci; 
      else { 
        if (stored >= ci) 
          stored -= ci; 
        else 
          distressed++; 
      }
    }
    System.out.print(stored);
    System.out.print(" " + distressed);
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
    new A359().run(); 
  }
}
