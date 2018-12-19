
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class B197 { 
  
  public void solve() throws IOException {
    int n = ni(); 
    int m = ni();
    long tot = 0; 
    int curr, next;
    int[] arr = new int[m + 1];
    for (int i = 1; i <= m; i++) 
      arr[i] = ni(); 
    tot += arr[1] - 1; 
    for (int i = 1; i < m; i++){
      curr = arr[i]; 
      next = arr[i + 1];
      if (curr < next)
        tot += (next - curr);
      else if (curr > next) 
        tot += (n - curr + next); 
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
    new B197().run(); 
  }
}

