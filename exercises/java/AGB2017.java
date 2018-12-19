
import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.HashSet; 

public class AGB2017 { 
  
  public void solve() throws IOException {
    int count = 0; 
    HashSet<Character> h = new HashSet (); 
    char[] chars = nextLine().toCharArray(); 
    for (int i = 0; i < chars.length; i++) { 
      char curr = chars[i];
      if (curr == 'a' || curr == 'e' || curr == 'i' || curr == 'o' || curr == 'u')
        count++;
      if (curr == '1' || curr == '3' || curr == '5' || curr == '7' || curr == '9')
        count++; 
    }
    System.out.println(count);
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
    new AGB2017().run(); 
  }
}
