import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class knapsack { 
  
  public void solve() throws IOException { 
    int n = 4;
    int[] V = {100, 70, 50, 10};
    int[] W = {10, 4, 6, 12};
    System.out.println(val(0, 12, V, W));
  }
  
  public int val(int index, int remw, int[] V, int[] W) {
    if (remw == 0)
      return 0; 
    if (index == W.length)
      return 0; 
    if (W[index] > remw)
      return val(index + 1, remw, V, W);
    return Math.max(val(index + 1, remw, V, W), V[index] + val(index + 1, remw - W[index], V, W));
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
    new knapsack().run(); 
  }

}
