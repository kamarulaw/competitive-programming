
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A340 { 
  
  public void solve() throws IOException { 
    int x = ni(); 
    System.out.println(minsteps(x));
  }
  
  public int minsteps(int x) { 
    if (x == 1 || x == 2 || x == 3 || x == 4 || x == 5) 
      return 1; 
    else { 
      int one = 1 + minsteps(x - 1); 
      int two = 1 + minsteps(x - 2); 
      int thr = 1 + minsteps(x - 3);
      int fou = 1 + minsteps(x - 4); 
      int fiv = 1 + minsteps(x - 5); 
      return Math.min(Math.min(Math.min(Math.min(one, two), thr), fou), fiv);
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
    new A340().run(); 
  }
}
