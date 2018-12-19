
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

public class A101 { 
  
  public void solve() throws IOException { 
    HashMap<Character, Integer> h1 = new HashMap(); 
    HashMap<Character, Integer> h2 = new HashMap(); 
    
    String s1 = nextLine(); 
    String s2 = nextLine(); 
    String s3 = nextLine(); 
    
    String first = s1 + s2; 
    for (int i = 0; i < first.length(); i++) { 
      if (!h1.containsKey(first.charAt(i)))
        h1.put(first.charAt(i), 1); 
      else
        h1.put(first.charAt(i), h1.get(first.charAt(i)) + 1);
    }

    for (int i = 0; i < s3.length(); i++) { 
      if (!h2.containsKey(s3.charAt(i))) 
        h2.put(s3.charAt(i), 1);
      else
        h2.put(s3.charAt(i), h2.get(s3.charAt(i)) + 1); 
    }
    
    Set<Character> set1 = h1.keySet(); 
    Set<Character> set2 = h2.keySet();
    if (set1.size() != set2.size()) {
      System.out.println("NO");
      return; 
    }
    for (char c: set1) { 
      if (!set2.contains(c) || h1.get(c) != h2.get(c)){ 
        System.out.println("NO");
        return; 
      }
    }
    System.out.println("YES");
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
    new A101().run(); 
  }
}

