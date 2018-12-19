
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.HashMap; 
import java.util.Set; 

public class A486 { 
  public void solve() throws IOException { 
    int n = ni(), k = ni(); 
    int[] arr = new int[n + 1]; 
    HashMap<Integer, Integer> h = new HashMap(); 
    HashMap<Integer, Integer> h2 = new HashMap();
    for (int i = 1; i <= n; i++) { 
      arr[i] = ni(); 
      if (!h.containsKey(arr[i]))
        h.put(arr[i], 1); 
      else 
        h.put(arr[i], h.get(arr[i]) + 1);
      h2.put(arr[i], i);
    }
    if (h.size() < k) { 
      System.out.println("NO");
      return; 
    }
    Set<Integer> keys = h.keySet();
    System.out.println("YES");
    for (int i = 0; i < k; i++) { 
      System.out.print(h2.get(keys.toArray()[i]) + " ");
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
    new A486().run(); 
  }
}
