import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.TreeMap; 
import java.util.ArrayList; 

public class UVA484 { 
  public static void solve() throws IOException { 
    int n = 0;
    int curr; 
    
    String[] arr =  nextLine().split(" ");
    int[] iarr = new int[arr.length];
    for (int i = 0; i < iarr.length; i++)
      iarr[i] = Integer.parseInt(arr[i]);
    
    TreeMap<Integer, Integer> t = new TreeMap(); 
    ArrayList<Integer> a = new ArrayList(); 
    for (int i = 0; i < 10; i++) { 
      curr = iarr[i];
      if (!t.containsKey(curr)) { 
        t.put(curr, 1);
        a.add(curr);
      } else { 
        t.put(curr, t.get(curr) + 1);
      }
    }
    for (int i = 0; i < a.size(); i++) 
      System.out.println(a.get(i) + " " +t.get(a.get(i)));
  }
  
  
  public static BufferedReader br; 
  public static StringTokenizer st; 
  public static PrintWriter out; 
  
  public static String nextToken() throws IOException {
    while(st == null || !st.hasMoreTokens()) 
      st = new StringTokenizer(br.readLine());
    return st.nextToken(); 
  }

  public static String nextLine() throws IOException {
    return br.readLine();
  }
  
  public static int ni() throws IOException {
    return Integer.parseInt(nextToken());
  }
  
  public static long nl() throws IOException {
    return Long.parseLong(nextToken());
  }
  
  public static double nd() throws IOException {
    return Double.parseDouble(nextToken());
  }

  public static void main(String args[]) throws IOException { 
    br = new BufferedReader(new InputStreamReader(System.in));
    out = new PrintWriter(new OutputStreamWriter(System.out));
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    out.close();
  }

}
