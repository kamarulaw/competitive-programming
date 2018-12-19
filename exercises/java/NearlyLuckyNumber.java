import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class NearlyLuckyNumber { 
  
  public void solve() throws IOException { 
    long n = nl(); 
    long nld = 0;
    long mod = 0; 
    while (n > 0) { 
      mod = n % 10; 
      if (isLucky(mod))
        nld++; 
      n /= 10; 
    }
    if (isLucky(nld))
      System.out.println("YES");
    else 
      System.out.println("NO");
  }
  
  public boolean isLucky(long n) {
    if (n == 0)
      return false; 
    long mod = 0; 
    while (n > 0) { 
      mod = n % 10;
      if (mod != 4 && mod != 7)
        return false; 
      n /= 10; 
    }
    return true; 
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
    new NearlyLuckyNumber().run(); 
  }
}

