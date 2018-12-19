
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.HashSet; 

public class A338 { 
  
  public void solve() throws IOException {
    int n = ni(), m = ni(); 
    int total = 0; 
    HashSet<Integer> h = new HashSet(); 
    for (int i = 0; i < n; i++) { 
      int curr = ni(); 
      for (int j = 0; j < curr; j++) {
        int xi = ni(); 
        if (!h.contains(xi)) { 
          h.add(xi);
          total++; 
        }
      }
    }
    if (total == m) 
      System.out.println("YES");
    else 
      System.out.println("NO");
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
    new A338().run(); 
  }
}

