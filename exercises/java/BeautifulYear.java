import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.HashMap; 

public class BeautifulYear { 
  
  public void solve() throws IOException { 
    int n = ni() + 1;
    while (!distinctDigits(n))  
      n++;
    System.out.println(n);
  }
  
  public boolean distinctDigits(int n) { 
    if (n == 0)
      return true; 
    int mod = 0;
    HashMap<Integer, Integer> H = new HashMap();
    while (n > 0) { 
      mod = n % 10; 
      if (H.containsKey(mod))
        return false; 
      H.put(mod, 1);
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
    new BeautifulYear().run(); 
  }
}

