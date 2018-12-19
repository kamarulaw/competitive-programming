import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.BitSet; 

public class QueueAtTheSchool { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int t = ni();
    String S = nextLine(); 
    BitSet B = new BitSet(n + 1);
    for (int i = 1; i <= n; i++) {
      if (S.charAt(i - 1) == 'B') { 
        B.flip(i); 
      }
    }
    for (int i = 0; i < t; i++) {
      int j = 1; 
      while (j < n) { 
        if (B.get(j) && !B.get(j + 1)) { 
          B.flip(j);
          B.flip(j + 1);
          j += 2; 
        } else { 
          j++; 
        }
      }  
    }
    StringBuilder result = new StringBuilder();
    for (int i = 1; i <= n; i++) {
      if (B.get(i))
        result.append("B");
      else 
        result.append("G");
    }
    System.out.println(result.toString());
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
    new QueueAtTheSchool().run(); 
  }

}

