import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class CF458B { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] arr = new int[n];
    for (int i = 0; i < n; i++)
      arr[i] = ni(); 
    Arrays.sort(arr);
    if (n == 1 || arr[n - 2] < arr[n - 1]) {
      System.out.println("Conan");
      return;
    }
    int i = n - 1;
    int endrepeat = 1; 
    while (i > 0 && arr[i] == arr[i - 1]) { 
      endrepeat++;
      i--;
    }
    int rem = n - endrepeat; 
    if (endrepeat % 2 == 1)
      System.out.println("Conan");
    else 
      System.out.println("Agasa");
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
    new CF458B().run(); 
  }
}
