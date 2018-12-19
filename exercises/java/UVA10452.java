import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class UVA10452 {   
  public StringBuilder result; 
  public static class coord { 
    int xco; 
    int yco; 
    public coord(int xco, int yco) { 
      this.xco = xco; 
      this.yco = yco;
    }
  }
  
  public void solve() throws IOException {
    int N = ni(); 
    for (int i = 0; i < N; i++) { 
      coord sp = new coord(0,0);
      int m = ni(); 
      int n = ni();
      char[][] mat = new char[m][n];
      for (int j = 0; j < m; j++) {
        String line = nextLine(); 
        for (int k = 0; k < n; k++) {
          char curr = line.charAt(k);
          mat[j][k] = curr;
          if (curr == '@') 
            sp = new coord(j, k);
        }
      }
      search(mat, sp, 0);
      System.out.println(result.toString());
      result = new StringBuilder(); 
    }
  }
 
  public void search(char[][] mat, coord sp, int level) {
    int m = mat.length; 
    int n = mat[0].length; 
    int row = sp.xco; 
    int col = sp.yco; 
    char c = mat[row][col]; 
    
    coord l = new coord(row - 1, col);
    l = (isLegal(l, m, n)) ? l : null; 
    coord r = new coord(row + 1, col);
    r = (isLegal(r, m, n)) ? r : null;
    coord f = new coord(row, col + 1);
    f = (isLegal(f, m, n)) ? f : null; 
    
    coord[] dirs = {l, r, f};
    for (coord d: dirs) { 
      if (d == null) 
        continue;
      else {
        if (d == l)
          appendDir(mat, level, l.xco, l.yco, 'l'); 
        else if (d == r) 
          appendDir(mat, level, r.xco, r.yco, 'r'); 
         else 
          appendDir(mat, level, f.xco, f.yco, 'f');
        
        search(mat, d, level + 1);
      }
    }    
  }
  
  public boolean isLegal(coord c, int m, int n) { 
    return 0 <= c.xco && c.xco < m && 0 <= c.yco && c.yco < n;  
  }
  
  public void appendDir(char[][] mat, int level, int row, int col, char di) {
    char c = mat[row][col];
    if (level == 0 && c == 'I')
      withSpace(di);
    else if (level == 1 && c == 'E')
      withSpace(di);
    else if (level == 2 && c == 'H')
      withSpace(di);
    else if (level == 3 && c == 'O')
      withSpace(di);
    else if (level == 4 && c == 'V') 
      withSpace(di); 
    else if (level == 5 && c == 'A')
      withSpace(di);
    else if (level == 6 && c == '#') { 
      if (di == 'l')
        addLeft(); 
      else if (di == 'r')
        addRight(); 
      else
        addForth(); 
    }
 }
 
  public void withSpace(char di) { 
    if (di == 'l') 
      addLS();
    else if (di == 'r') 
      addRS(); 
    else 
      addFS();
  }
  
  public void addLS() { 
    addLeft(); 
    addSpace(); 
  }
  
  public void addRS() { 
    addRight(); 
    addSpace();
  }
  
  public void addFS() { 
    addForth(); 
    addSpace(); 
  }
  
  public void addLeft() { 
    result.append("left");
  }
  
  public void addRight() { 
    result.append("right");
  }
  
  public void addForth() { 
    result.append("forth");
  }
  
  public void addSpace() { 
    result.append(" ");
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
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    //out.close(); 
  }

  public static void main(String args[]) throws IOException { 
    new UVA10452().run(); 
  }
}
