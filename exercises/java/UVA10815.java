import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.TreeSet; 

public class UVA10815 {
  private static final int l = (int)'a';
  private static final int u = (int)'z';
  private static final int L = (int)'A';
  private static final int U = (int)'Z';
  
  public static void solve() throws IOException {
    String line = nextLine(); 
    TreeSet<String> t = new TreeSet();
    StringBuilder sb = new StringBuilder(); 
    while (line != null) { 
      char[] lc = line.toCharArray(); 
      for (int i = 0; i < lc.length; i++) {
        char c = lc[i];
        if ((l <= c && c <= u) || (L <= c && c <= U))
          sb.append(c);
      }
      
      t.add(sb.toString().toLowerCase());
      sb = new StringBuilder(); 
      line = nextLine();
    }
    
    for (String s: t)
      System.out.println(s);
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
