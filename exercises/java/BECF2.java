
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 
import java.util.HashMap; 

public class BECF2 { 
  
  public void solve() throws IOException { 
    String s = nextLine();
    String[] arr = s.split("\\s+");
    int alen = Integer.parseInt(arr[0]);
    int blen = Integer.parseInt(arr[1]);
    int[] as = new int[alen];
    int[] bs = new int[blen];
    HashMap<Integer, Integer> h = new HashMap(); 
    for (int i = 0; i < alen; i++)
      as[i] = ni();
    for (int i = 0; i < blen; i++) 
      bs[i] = ni(); 
    Arrays.sort(as); 
    for (int i = 0; i < blen; i++) { 
      int j = 0;
      if (!h.containsKey(bs[i])) { 
        while (j < alen && as[j] <= bs[i])
          j++; 
        System.out.print(j + " ");
        h.put(bs[i], j);
        j = 0; 
      } else { 
        System.out.print(h.get(bs[i]) + " ");
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
    solve(); 
  }

  public static void main(String args[]) throws IOException { 
    new BECF2().run(); 
  }
}
