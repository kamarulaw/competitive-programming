
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A372 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    long c = nl(); 
    long res = 0;
    long[] vals = new long[n];
    if (n == 1) { 
      System.out.println(1);
      return; 
    }
    for (int i = 0; i < n; i++)  
      vals[i] = ni();   
    for (int i = 0; i < n - 1; i++) { 
      if (vals[i + 1] - vals[i] <= c) 
        res++; 
      else 
        res = 1; 
    }
    System.out.println(res);
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
    new A372().run(); 
  }
}

