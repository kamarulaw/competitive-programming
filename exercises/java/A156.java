
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A156 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] arr = new int[3];
    for (int i = 0; i < n; i++) { 
      if (i % 3 == 0) 
        arr[0] += ni();
      else if (i % 3 == 1) 
        arr[1] += ni(); 
      else
        arr[2] += ni(); 
    }
    if (arr[0] > arr[1] && arr[0] > arr[2])
      System.out.println("chest");
    else if (arr[1] > arr[0] && arr[1] > arr[2])
      System.out.println("biceps");
    else
      System.out.println("back");
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
    new A156().run(); 
  }
}
