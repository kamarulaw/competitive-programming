
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class AECF1 { 
  
  public void solve() throws IOException { 
    int t = ni(); 
    for (int i = 0; i < t; i++) { 
      long curr = ni(); 
      long val = ((curr) * (curr + 1)) / 2;
      int mp = 0; 
      while (Math.pow(2, mp) < curr)
        mp++;
      for (int j = 0; j <= mp; j++) 
        val -= (2 * Math.pow(2, j));
      System.out.println(val);
    }
  }
 
  public BufferedReader br; 
  public StringTokenizer st; 
  public PrintWriter out; 
  
  public String nextToken() throws IOException {

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
    new AECF1().run(); 
  }
}

