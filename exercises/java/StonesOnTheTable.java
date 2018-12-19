import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class StonesOnTheTable { 
  
  public void solve() throws IOException {
    int n = ni();
    String st = nextLine();
    int i = 0; 
    int l = 1; 
    int removed = 0; 
    while (l < n) { 
      if (st.charAt(i) != st.charAt(l)) { 
        i++; 
        l++;
      } else { 
        while (l < n && st.charAt(i) == st.charAt(l)) { 
          l++;
          removed++; 
        }
        i = l;
        l += 1;
      }
    }
    System.out.println(removed);
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
    new StonesOnTheTable().run(); 
  }

}

