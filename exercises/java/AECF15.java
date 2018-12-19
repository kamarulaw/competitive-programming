
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class AECF15 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] lis = new int[n]; 
    int[] arr = new int[n]; 
    Arrays.fill(lis, 1);
    for (int i = 0; i < n; i++) 
      arr[i] = ni(); 
    for (int i = 0; i < n; i++) { 
      for (int j = 0; j < i; j++) { 
        if (arr[j] < arr[i] && lis[j] + 1 > lis[i]) { 
          lis[i] = lis[j] + 1;
        }
      }
    }
    int max = lis[0];
    for (int i = 1; i < n; i++)
      max = Math.max(max, lis[i]);
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
    new AECF15().run(); 
  }
}

