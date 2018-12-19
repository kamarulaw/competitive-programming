import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 

public class A279 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int[] arr = new int[n];
    ArrayList<Integer> one = new ArrayList(); 
    ArrayList<Integer> two = new ArrayList(); 
    ArrayList<Integer> thr = new ArrayList();
    for (int i = 0; i < n; i++) { 
      int curr = ni(); 
      if (curr == 1) 
        one.add(i + 1);
      else if (curr == 2)
        two.add(i + 1);
      else 
        thr.add(i + 1 );
    }
    int minsize = Math.min(Math.min(one.size(), two.size()), thr.size());
    System.out.println(minsize);
    for (int i = 0; i < minsize; i++) { 
      System.out.print(one.remove(0) + " ");
      System.out.print(two.remove(0) + " " + thr.remove(0));
      System.out.println();
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
    new A279().run(); 
  }
}
