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

public class CF458E { 
  
  public void solve() throws IOException { 

  }
  
  public boolean isPalindrome(String S) {
    int ne = 0; 
    int no = 0; 
    char[] carr = S.toCharArray(); 
    HashMap<Character, Integer> h = new HashMap();
    for (int i = 0; i < carr.length; i++) { 
      if (!h.containsKey(carr[i]))
        h.put(carr[i], 1); 
      else 
        h.put(carr[i], h.get(carr[i]) + 1);
    }
    Set<Character> ks = h.keySet(); 
    for (char c: ks) {
      if ()
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
    new CF458E().run(); 
  }
}
