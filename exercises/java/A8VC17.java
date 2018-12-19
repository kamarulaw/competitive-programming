
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A8VC17 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = 1; 
    while (isPrime(n * m + 1)) 
      m++;
    System.out.println(m);
  }
  
  public boolean isPrime(int n) { 
    if (n < 2) 
      return false; 
    if (n == 2) 
      return true; 
    if (n % 2 == 0)
      return false; 
    for (int i = 3; i < (int)Math.pow(n, .5) + 1; i++) 
      if (n % i == 0) 
        return false;
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
    new A8VC17().run(); 
  }
}
