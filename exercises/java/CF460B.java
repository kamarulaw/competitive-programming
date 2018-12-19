import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class CF460B { 
  
  public void solve() throws IOException { 
    int k = ni(); 
    System.out.println(kthPerfect(k));
  }
  
  public int kthPerfect(int k) {
    int guess = 19; 
    int found = 0;
    while (found < k) { 
      if (isPerfect(guess))
        found++; 
      guess++; 
    }
    return guess - 1;
  }
  
  public boolean isPerfect(int n) {
    int tot = 0; 
    while (n > 0) { 
      tot += n % 10; 
      n /= 10; 
    }
    return tot == 10;
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
    new CF460B().run(); 
  }
}
