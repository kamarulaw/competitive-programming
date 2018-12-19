import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer;
import java.util.Arrays; 

public class dp_weddingshopping_bu { 
  public void solve() throws IOException { 
    int M = ni(); 
    int C = ni(); 
    int[][] prices = new int[C][25]; 
    for (int i = 0; i < C; i++) 
      Arrays.fill(prices[i], -1); //fill takes in a 1-D Array
    boolean[][] reachable = new boolean[C][201];
    for (int i = 0; i < C; i++) { 
      int k = ni(); 
      for (int j = 0; j < k; j++) { 
        prices[i][j] = ni(); 
      }
    }
    dp(prices, reachable, M, C);
  }
  
  public void dp(int[][] prices, boolean[][] reachable, int money, int C) {
    int numprices = prices[0].length; 
    //Base Cases 
    for (int i = 0; i < numprices; i++) { 
      if (prices[0][i] == -1)
        break; 
      if (money - prices[0][i] >= 0)
        reachable[0][money - prices[0][i]] = true; 
    }
    //Build
    for (int g = 1; g < C; g++) { 
      for (int j = 0; j < numprices; j++) {  
        if (prices[g][j] == -1)
          break; 
        for (int i = 0; i < numprices; i++) { 
          if (reachable[g - 1][i] && i - prices[g][j] >= 0)
            reachable[g][i - prices[g][j]] = true;
        }
      }
    }
    for (int i = 0; i < numprices; i++) { 
      if(reachable[C - 1][i] == true) {
        System.out.println(money - i);
        return; 
      }
    }
    System.out.println("no solution"); 
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
    new dp_weddingshopping_bu().run(); 
  }

}
