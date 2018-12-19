import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 

public class UVA167 { 
  int nq = 8; 
  int max = 0; 
  int[] qrows = new int[nq];
  int[][] mat = new int[nq][nq];
  
  public void solve() throws IOException { 
    mat = getMat(); 
    System.out.println(backtrack(0));
  }
  
  public int backtrack(int col) { 
    if (col == nq) { 
      int sum = 0; 
      for (int i = 0; i < nq; i++)
        sum += mat[i][qrows[i]];
      max = Math.max(max, sum);
      return max;  
    } else { 
      for (int row = 0; row < nq; row++) { 
        if (isLegal(row, col)) { 
          qrows[col] = row; 
          int solution = backtrack(col + 1);
          if (solution != -1) 
            return solution; 
          qrows[col] = -1; 
        }
      }
      return -1; 
    }
  }
  
  public int[][] getMat() throws IOException { 
    for (int i = 0; i < 8; i++) 
      for (int j = 0; j < 8; j++) 
        mat[i][j] = ni();
    return mat; 
  }
  
  public boolean isLegal(int r, int c) { 
    for (int col = 0; col < c; col++) { 
      if (col == c || qrows[col] == r || 
          Math.abs(col - c) == Math.abs(qrows[col] - r))
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

  public static void main(String[] args) throws IOException {
    new UVA167().run();
  }
}
