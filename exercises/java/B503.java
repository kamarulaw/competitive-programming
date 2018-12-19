
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays;

public class B503 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] nums = new int[n + 1]; 
    int[] holes = new int[n + 1]; 
    for (int i = 1; i <= n; i++) 
      nums[i] = ni();
    Arrays.fill(holes, 0);
    for (int i = 1; i <= n; i++) { 
      int temp = i; 
      holes[i]++; 
      while (holes[temp] != 2) { 
        temp = nums[temp]; 
        holes[temp]++; 
      }
      Arrays.fill(holes, 0); 
      System.out.print(temp + " ");
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
    new B503().run(); 
  }
}
