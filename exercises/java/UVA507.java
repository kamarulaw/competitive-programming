import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class UVA507 { 
  private int[] sarr = new int[20001];
  
  public void solve() throws IOException { 
    int b = ni(); 
    for (int r = 0; r < b; r++) {
      int route = r + 1; 
      int ans = 0; 
      int sum = 0; 
      int start = 1, end = 1, tmp = 1; 
      int s = ni(); 
      for (int i = 1; i < s; i++)
        sarr[i] = ni();
      
      for (int i = 1; i < s; i++) { 
        sum += sarr[i];
        if (sum < 0) { 
          sum = 0; 
          tmp = i; // tracks where we reset
        }
        
        if (sum >= ans) {
          if (sum > ans || (sum == ans && (i - tmp > start - end))) { 
            start = tmp;
            end = i; 
          }
          ans = sum; 
        }
      }
      
      if (ans <= 0)
        System.out.println("Route " + route + " has no nice parts");
      else 
        System.out.println("The nicest part of route " + route + " is between stops " + start + " and " + end);
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

  public static void main(String[] args) throws IOException { 
    new UVA507().run(); 
  }
}

