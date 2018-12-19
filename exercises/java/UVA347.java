import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.BitSet; 
import java.util.Iterator; 
import java.util.ArrayList; 

public class UVA347 { 
  public static void solve() throws IOException { 
    int co = 0; 
    int c = ni();
    ArrayList<Integer> arr = new ArrayList(); 
    while (c != 0) { 
      arr.add(c);
      c = ni(); 
    }
   
    Iterator<Integer> i = arr.listIterator();  
    while (i.hasNext()) {
      c = i.next(); 
      co++; 
      while (!isRunAround(ts(c))) { 
        c++; 
      }
      System.out.println("Case " + co + ": " + c);
    }
  }
  
  public static boolean isRunAround(String s) {  
    int ni = 0;
    int len = s.length();
    BitSet b = new BitSet(len);
    char[] ca = s.toCharArray();
    for (int i = 0; i < len; i++) {
      b.flip(ni);
      int inc = cti(ca[ni]);
      ni = (inc + len + ni) % len;
    }
    
    boolean allTrue = true; 
    for (int i = 0; i < len; i++) { 
      if (b.get(i) == false) { 
        allTrue = false; 
        break; 
      }
    }
    return allTrue && ni == 0;
  }
  
  public static String ts(int i) { 
    return String.valueOf(i);
  }
    
  public static int cti(Character c) {
    return Integer.parseInt(Character.toString(c));
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
