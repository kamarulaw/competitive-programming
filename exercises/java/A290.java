
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A290 { 
  
  public void solve() throws IOException { 
    int r = ni(); 
    int c = ni(); 
    String ht = "#"; 
    String pd = "."; 
    StringBuilder res = new StringBuilder(); 
    for (int i = 0; i < r; i++) { 
      if (i % 2 == 0) 
        for (int j = 0; j < c; j++)  
          res.append(ht);
      else if (i % 4 == 1) { 
        for (int j = 0; j < c - 1; j++) 
          res.append(pd); 
        res.append(ht); 
      } else { 
        res.append(ht);
        for (int j = 0; j < c - 1; j++) 
          res.append(pd);
      }
      System.out.println(res.toString());
      res = new StringBuilder(); 
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
    new A290().run(); 
  }
}

