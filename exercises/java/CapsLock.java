import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class CapsLock { 
  
  public void solve() throws IOException { 
    // a - z <=> 97 - 122
    String st = nextLine(); 
    StringBuilder result = new StringBuilder();
    for (int i = 1; i < st.length(); i++) {
      int ascii = (int)st.charAt(i);
      if (97 <= ascii && ascii <= 122) {
        System.out.println(st);
        return; 
      }
    }
    
    for (int i = 0; i < st.length(); i++) { 
      int ascii = (int)st.charAt(i);
      if (97 <= ascii && ascii <= 122)
        result.append(String.valueOf(st.charAt(i)).toUpperCase());
      else 
        result.append(String.valueOf(st.charAt(i)).toLowerCase());
    }
    System.out.println(result.toString());
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
    new CapsLock().run(); 
  }

}
