import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class CF458A { 
  
  public void solve() throws IOException {
    int max = 0; 
    int ans = 0; 
    boolean is = false; 
    int n = ni(); 
    int[] arr = new int[n];
    for (int i = 0; i < n; i++) { 
      arr[i] = ni(); 
      max = Math.max(max, arr[i]);
    }
    Arrays.sort(arr);
    int ceil = (int) Math.sqrt(max) + 1;
    for (int i = n - 1; i >= 0; i--) { 
      for (int j = ceil; j > 1; j--) { 
        if ((int)Math.pow(j, 2) == arr[i]) { 
          is = true;
          break; 
        }
      }
      if (is == false) {
        System.out.println(arr[i]);
        return;
      }
      is = false;
    }
  }
  
  public void solve_after() throws IOException {
    int[] key = new int[1000001];
    int ans = Integer.MIN_VALUE;
    Arrays.fill(key, 0);
    int n = ni(); 
    int[] arr = new int[n];
    for (int i = 0; i < n; i++)
      arr[i] = ni();
    Arrays.sort(arr);
    for (int i = 0; i * i <= arr[n-1]; i++) { 
      key[i * i] = 1;
    }
    for (int i = n - 1; i >= 0; i--) { 
      if (arr[i] < 0 || key[arr[i]] == 0) { 
        ans = Math.max(ans, arr[i]);
        System.out.println(ans);
        return;
      }
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
    //solve(); 
    solve_after(); 
  }

  public static void main(String args[]) throws IOException { 
    new CF458A().run(); 
  }
}
