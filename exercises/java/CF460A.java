import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class CF460A { 
  
  private static class pair implements Comparable<pair> {
    int a; 
    int b; 
    public pair(int a, int b) {
      this.a = a; 
      this.b = b; 
    }
    public int compareTo(pair other) {  
      double diff = (double) this.a / this.b - (double) other.a / other.b;;
      if (diff <= 0) 
        return -1;
      else 
        return 1; 
    }
  }
  
  public void solve() throws IOException { 
    int n = ni(); 
    int m = ni(); 
    pair[] pairs = new pair[n];
    /*
    for (int i = 0; i < n; i++) 
      pairs[i] = new pair(ni(), ni());
    Arrays.sort(pairs);
    System.out.println((m * pairs[0].a) / (double) pairs[0].b);
    */
    int a = Integer.MAX_VALUE, b = 1; 
    int tempa, tempb; 
    for (int i = 0; i < n; i++) {
      tempa = ni(); 
      tempb = ni(); 
      if ((double) tempa / tempb < (double) a / b) { 
        a = tempa; 
        b = tempb; 
      }
    }
    System.out.println((m * a) / (double) b);
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
    new CF460A().run(); 
  }
}
