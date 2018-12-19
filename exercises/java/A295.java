import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.HashMap; 

public class A295 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    String s = nextLine();
    s = s.toLowerCase(); 
    if (n < 26) { 
      System.out.println("NO");
      return; 
    }
    HashMap<Character, Integer> h = new HashMap(); 
    for (int i = 0; i < n; i++) { 
      if (!h.containsKey(s.charAt(i)))
        h.put(s.charAt(i), 1);
    }
    if (h.size() == 26) 
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
    new A295().run(); 
  }
}
