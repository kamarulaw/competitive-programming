
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class AGB2014 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int t = ni(); 
    int[] arr = new int[n + 1]; 
    for (int i = 1; i < n; i++) 
      arr[i] = ni(); 
    
    int j = 1; 
    int val = arr[j]; 
    while(j < n && val <= t) {
      j = j + val; 
      val = arr[j];
      if (j == t) { 
        System.out.println("YES");
        return;
      }
    }
    System.out.println("NO");
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
    new AGB2014().run(); 
  }
}

