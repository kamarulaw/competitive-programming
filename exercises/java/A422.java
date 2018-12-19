
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A422 { 
  
  public void solve() throws IOException { 
    long a = ni(); 
    long b = ni(); 
    a = factorial(a); 
    b = factorial(b); 
    System.out.println(gcd(a, b));
  }
  
  public long gcd(long a, long b) { 
    if (a == 0) 
      return b; 
    if (b == 0) 
      return a;
    return gcd(b, a % b);
  }
  
  public long factorial(long a) { 
    long n = a; 
    for (long i = 2; i < n; i++) 
      a = a * i;
    return a; 
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
    new A422().run(); 
  }
}
