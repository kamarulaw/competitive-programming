
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class AGB2016 { 
  
  public void solve() throws IOException { 
    int n = ni(), k = ni(); 
    int tval = 240 - k; 
    int lo = 1; 
    int hi = n; 
    int pbi = 1;
    while (lo < hi) { 
      int mid 
    }
    
  }
  public void solve_linear() throws IOException { 
    // ACCEPTED 
    int n = ni();
    int k = ni(); 
    int low = 1;
    int i = low; 
    int val = k + 5 * gauss(1);
    while (val <= 240 && i <= n) {
      i++; 
      val = k + 5 * gauss(i);
    }
    i--; 
    System.out.println(i);
  }
  
  public int f(int k, int i) { 
    return k + gauss(i);
  }
  
  public int gauss(int i) { 
    return ((i * (i + 1)) / 2);
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
    new AGB2016().run(); 
  }
}

