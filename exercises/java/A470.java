
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A470 { 
  
  public void solve() throws IOException { 
    int R = ni(); 
    int C = ni(); 
    String[] strings = new String[R];
    for (int i = 0; i < R; i++) 
      strings[i] = nextLine(); 
    for (int i = 0; i < R; i++) { 
      String cs = strings[i]; 
      for (int j = 0; j < C; j++) {
        if (cs.charAt(j) == 'S') { 
          int l = j - 1; 
          int r = j + 1; 
          int u = i - 1;
          int d = i + 1;
          if (0 <= l && l < C) 
            if (cs.charAt(l) == 'W') { 
              System.out.println("NO");
              return; 
            }
          if (0 <= r && r < C) 
            if (cs.charAt(r) == 'W') { 
              System.out.println("NO");
              return; 
            }
          if (0 <= u && u < C) {
            cs = strings[u];
            if (cs.charAt(j) == 'W') { 
              System.out.println("NO");
              return; 
            }
          }
          if (0 <= d && d < C) { 
            cs = strings[d];
            if (cs.charAt(j) == 'W') { 
              System.out.println("NO");
              System.out.println(d);
              return; 
            }
          }
        }
      }
    }
    System.out.println("YES");
    for (int i = 0; i < R; i++) { 
      System.out.println(strings[i].replaceAll("[.]", "D"));
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
    new A470().run(); 
  }
}

