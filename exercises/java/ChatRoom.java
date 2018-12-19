import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class ChatRoom { 
  
  public void solve() throws IOException { 
    String S = nextLine();
    int len = S.length();
    int i = 0; 
    int fh = -1; 
    while (fh == -1 && i < len) {
      if (S.charAt(i) == 'h') 
        fh = i;
      i++;
    }
    
    if (fh == -1 && i == len) {
      System.out.println("NO");
      return; 
    }
    
    boolean[] fc = new boolean[5];
    fc[0] = true; 
    for (int j = fh +  1; j < len; j++) { 
      char cc = S.charAt(j);
      if (cc == 'e' && fc[0] == true) 
        fc[1] = true; 
      else if (cc == 'l' && fc[2] == true)
        fc[3] = true;
      else if (cc == 'l' && fc[1] == true) 
        fc[2] = true;
      else if (cc == 'o' && fc[3] == true) {
        System.out.println("YES");
        return;
      }
    }
    System.out.println("NO");
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
    new ChatRoom().run(); 
  }

}

