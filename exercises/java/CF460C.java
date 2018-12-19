import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class CF460C { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    int k = ni();
    int tot = 0;
    int found = 0; 
    char[][] mat = new char[n][m];
    String[] strings = new String[n];
    for (int i = 0; i < n; i++)
      strings[i] = nextLine();
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < m; j++) 
        mat[i][j] = strings[i].charAt(j);
    
    for (int i = 0; i < n; i++) { 
      for (int j = 0; j < m; j++) { 
        if (mat[i][j] == '.') {
          found++;
          while (j < m && found == k && mat[i][j] == '.') 
            j++; tot++; 
          found = 0; 
        }
        found = 0; 
      }
    }
    System.out.println(tot);
    for (int j = 0; j < m; j++) { 
      for (int i = 0; i < n; i++) { 
        if (mat[i][j] == '.') {
          found++;
          while (i < n && found == k && mat[i][j] == '.')  
            i++; tot++;
          found = 0; 
        }
        found = 0; 
      }
    }
    System.out.println(tot);
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
    new CF460C().run(); 
  }
}

