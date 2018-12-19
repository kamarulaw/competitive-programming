import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 
import java.util.Collections; 
public class UVA410 { 
  
  public void solve() throws IOException { 
    int C = ni(), S = ni(); 
    ArrayList<Integer> vals = new ArrayList(); 
    for (int i = 1; i <= 2*C; i++) { 
      if (i <= S)
        vals.add(ni());
      else 
        vals.add(0);
    }  
    Collections.sort(vals);
    int counter = 0; 
    for (int i = 0; i < C; i++) 
      System.out.println(counter++ + ": " + vals.get(i) + " " + vals.get(2 * C - 1 - i));
  }

  
  public int imbalance(int[] arr, int A) {
    int imb = 0; 
    for (int i = 0; i < arr.length; i++)
      imb += Math.abs(arr[i] - A); 
    return imb; 
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
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    //out.close(); 
  }

  public static void main(String args[]) throws IOException { 
    new UVA410().run(); 
  }

}
