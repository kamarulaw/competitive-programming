import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class Translation { 
  
  public void solve() throws IOException { 
    String t = nextLine(); 
    String s = nextLine(); 
    int tlen = t.length(); 
    int slen = s.length(); 
    if (slen != tlen) {
      System.out.println("NO");
      return;
    }
    char[] tc = t.toCharArray(); 
    for (int i = 0; i < tlen / 2; i++) {
      char tmp = tc[i];
      tc[i] = tc[tlen - i - 1];
      tc[tlen - i - 1] = tmp;
    }     
    String result = String.valueOf(tc).equals(s) ? "YES" : "NO";
    System.out.println(result);
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
    new Translation().run(); 
  }
}
