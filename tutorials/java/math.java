import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class math { 
  
  public void solve() throws IOException {
    
  }
  
  public boolean naiveIsPrime(int n) { 
    if (n == 2) 
      return true; 
    if (n % 2 == 0 || n == 1) 
      return false;
    
    int upper = (int)Math.sqrt(n);
    for (int i = 3; i <= upper; i++)
      if (n % i == 0)
        return false;
    return true; 
  }
  
  public int gcd(int a, int b ) {
    return b == 0 ? a : gcd(b, a % b);
  }
  
  public int lcm(int a, int b) { 
    return (a * b) / gcd(a, b);
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
    new math().run(); 
  }
}

