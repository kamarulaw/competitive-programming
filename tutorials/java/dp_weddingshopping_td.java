import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class dp_weddingshopping_td { 
  private int M, C; 
  private int[][] price = new int[25][25];
  private int[][] memo = new int[210][25];
  
  public void solve() throws IOException { 
    int K = 0; 
    M = ni(); 
    C = ni();
    for (int i = 0; i < C; i++) { 
      K = ni(); 
    }
  }
  
  public int shop(int money, int g) { 
    int ans = -1000000; 
    
    if (money < 0)
      return ans; 
    if (g == C) 
      return M - money;
    if (memo[money][g] != -1)
      return memo[money][g];
    for (int model = 1; model <= price[g][0]; model++)
      ans = Math.max(ans, shop(money - price[g][model], g + 1));
    memo[money][g] = ans; 
    return ans; 
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
    new dp_weddingshopping_td().run(); 
  }

}
