import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 
import java.util.Arrays; 
public class UVA231 { 
  
  public void solve() throws IOException { 
    ArrayList<Integer> dists = new ArrayList(); 
    int i = ni(); 
    while (i != -1) {
      dists.add(i);
      i = ni(); 
    }
    
    int len = dists.size(); 
    int[] memo = new int[len];
    Arrays.fill(memo, 1);
    for (int j = 0; j < len; j++) 
      for (int k = 1; k < j; k++) 
        if (dists.get(k) > dists.get(j) && 1 + memo[k] > memo[j])
          memo[j] = 1 + memo[k];
  
    int max = 0; 
    for (int j = 0; j < memo.length; j++)
      max = Math.max(max, memo[j]);
    System.out.println(max);
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
    new UVA231().run(); 
  }
}
