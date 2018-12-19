

import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.Arrays;
import java.util.Scanner;
import java.util.StringTokenizer; 

public class gph_floydwarshall { 
  public void floydwarshall(int[][] AdjMat) {  
    int n = AdjMat[0].length; 
    for (int k = 0; k < n; k++) 
      for (int i = 0; i < n; i++) 
        for (int j = 0; j < n; j++) 
          AdjMat[i][j] = Math.min(AdjMat[i][j], AdjMat[i][k] + AdjMat[k][j]);
    
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < n; j++) 
        System.out.printf("sp(%d, %d) = %d\n", i, j, AdjMat[i][j]); 
  }
  
  public void solve() throws IOException { 
    int n = ni();
    int m = ni();
    int[][] AdjMat = new int[n][n];
    
    for (int i = 0; i < n; i++) {
      Arrays.fill(AdjMat[i], 10000);
      AdjMat[i][i] = 0; 
    }
    
    for (int i = 0; i < m; i++)  
      AdjMat[ni()][ni()] = ni();
    
    floydwarshall(AdjMat);
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
    new gph_floydwarshall().run(); 
  }
}
