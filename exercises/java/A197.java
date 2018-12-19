
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class A197 { 
  
  public void solve() throws IOException { 
    String s = nextLine(); 
    String[] arr = s.split("\\+");
    int[] ints = new int[arr.length];
    for (int i = 0; i < ints.length; i++)
      ints[i] = Integer.parseInt(arr[i]);
    Arrays.sort(ints); 
    for (int i = 0; i < ints.length; i++) {
      System.out.print(ints[i]);
      if (i != ints.length - 1) 
        System.out.print("+");
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
    new A197().run(); 
  }
}
