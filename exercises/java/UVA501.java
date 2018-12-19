import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.TreeSet; 
import java.util.ArrayList; 

public class UVA501 {
  
  public static void solve() throws IOException { 
    int k = ni();
    for (int j = 0; j < k; j++) { 
      int m = ni(); 
      int n = ni(); 
      int i = 0, iu = 1, ia = 1; 
      long[] a = new long[m + 1]; 
      long[] u = new long[n + 1];
      TreeSet<Long> t = new TreeSet();     
      
      for (int l = 1; l <= m; l++)
        a[l] = nl(); 
      for (int l = 1; l <= n; l++)
        u[l] = nl(); 
      
      while (ia <= m) { 
        if (u[iu] == t.size()) { 
          i++; 
          iu++; 
          System.out.println(i + " : " + TreeSetIndex(t, i));
        } else 
          t.add(a[++ia]);
      }
    }
  }
  
  public static long TreeSetIndex(TreeSet<Long> t, int i) { 
    int size = t.size(); 
    long[] larr = new long[size + 1];
    StringBuffer sb = new StringBuffer(); 
    for (int j = 1; j <= size; j++) {  
      larr[j] = t.pollFirst();
      sb.append(String.valueOf(larr[j]) + " ");
    }
    System.out.println(sb.toString());
    return larr[i];
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
