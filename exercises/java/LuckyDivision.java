import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class LuckyDivision { 
  
  public void solve() throws IOException { 
    int n = ni();     
    if (isLucky(n)) { 
      System.out.println("YES");
      return;
    }

    // works...but just go up to square root and check both for speed
    for (int div = 4; div < n; div++) { 
      if (n % div == 0 && isLucky(div)) { 
        System.out.println("YES");
        return;
      }
    }
    System.out.println("NO");
  }
  
  public boolean isLucky(int n) {
    int mod = 0;  
    while (n > 0) { 
      mod = n % 10; 
      n /= 10; 
      if (mod != 4 && mod != 7)
        return false; 
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
    new LuckyDivision().run(); 
  }
}
