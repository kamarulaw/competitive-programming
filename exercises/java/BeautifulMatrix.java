import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class BeautifulMatrix { 
  
  public void solve() throws IOException { 
    int[][] mat = new int[5][5];
    for (int i = 0; i < 5; i++)
      for (int j = 0; j < 5; j++) {
        mat[i][j] = ni();
        if (mat[i][j] == 1) {
           System.out.println(Math.abs(i - 2) + Math.abs(j - 2));
           return; 
        }
      }
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
    new BeautifulMatrix().run(); 
  }

}
