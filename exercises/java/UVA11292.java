import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class UVA11292 { 
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    int[] dheads = new int[n];
    int[] knights = new int[m];
    for (int i = 0; i < n; i++) 
      dheads[i] = ni(); 
    for (int i = 0; i < m; i++)
      knights[i] = ni();
    Arrays.sort(dheads);
    Arrays.sort(knights);
    int d = 0, k = 0 , tot = 0;
    while (d < n && k < m) { 
      //each time go to the best knight
      while (k < m && dheads[d] > knights[k]) 
        k++; 
      if (k >= m)
        break; 
      tot += knights[k];
      d++; 
      k++; 
    }
    if (d == n) 
      System.out.println(tot);
    else 
      System.out.println("Loowater is doomed!");
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
    new UVA11292().run(); 
  }
}

