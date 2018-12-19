import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class UVA253 { 
  public static void solve() throws IOException { 
    String s = nextLine(), s1, s2; 
    while (s != null) { 
      s1 = s.substring(0, 6);
      s2 = s.substring(6, 12);
      System.out.println(isRotation(s1, s2));
      s = nextLine(); 
    }
   }
  
  public static boolean isRotation(String s1, String s2) { 
    String temp; 
    String[] vrots = {s1, vr(s1), vr(vr(s1)), vr(vr(vr(s1)))};
    for (int i = 0; i < 4; i++) { 
      temp = vrots[i];
      if (s2 == temp)
        return true; 
      for (int j = 0; j < 3; j++) { 
        temp = hr(temp);
        if (s2 == temp)
          return true;
        else
          continue; 
      }
    }
    return false; 
  }
  
  public static String vr(String s) { 
    char[] ca = new char[s.length()];
    char one = ca[0], two = ca[1], fiv = ca[4], six = ca[5];
    ca[0] = fiv; 
    ca[1] = one; 
    ca[4] = six; 
    ca[5] = two; 
    return ca.toString();
  }
  
  public static String hr(String s) { 
    char[] ca = new char[s.length()];
    char two = ca[3], thr = ca[1], fou = ca[4], fiv = ca[2];
    ca[1] = fou; 
    ca[2] = two; 
    ca[3] = fiv; 
    ca[4] = thr;
    return ca.toString(); 
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
