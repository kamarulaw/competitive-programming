import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class UVA11413 { 
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    int[] cs = new int[m + 1];
    int minmax = Integer.MAX_VALUE;  
    int cminmax = 0; 
    for (int i = 1; i <= m; i++)
      cs[i] = ni(); 
    for (int i = 1; i <= n - m + 1; i++) { 
      cminmax = search(cs, i, n - m + 1, minmax); 
      minmax = Math.min(minmax, cminmax); 
    }
  }
  
  public int search(int[] cs, int start, int end, int prevmax) { 
    int mid = start + (end - start) / 2; 
    if (start <= end) { 
      int sum = sum(cs, start, end);
      if (sum < prevmax) 
        search(cs, start, mid - 1, sum);
      else
        search(cs, start, mid - 1, prevmax);
    }
    return prevmax;
  }
  
  public int sum(int[] cs, int s, int e) {
    int tot = 0; 
    for (int i = s; i <= e; i++)
      tot += cs[i];
    return tot; 
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
    new UVA11413().run(); 
  }

}
