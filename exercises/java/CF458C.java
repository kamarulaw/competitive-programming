import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class CF458C { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int k = ni();
    int ns = 0;
    int len = len(n);
    int dec = 0; 
    for (int i = 0; i < len; i++) { 
      dec += Math.pow(2, i) * (n % 10);
      n /= 10; 
    }
    for (int i = 1; i <= dec; i++) { 
      if (count(i) == k)
        ns++;
    }
    System.out.println(ns);
  }
  
  public int count(int num) {
    int count = 0; 
    while (num != 1) { 
      count++; 
      num = numBits(num);
    }
    return count; 
  }
  
  public int len(int n) { 
    int len = 0; 
    while (n > 0) { 
      len++; 
      n /= 10; 
    }
    return len; 
  }
  
  public int numBits(int n) { 
    int mp = 0; 
    int ob = 0; 
    while (Math.pow(2, mp) < n)
      mp++;
    for (int i = mp; i >= 0; i--) { 
      if (n - Math.pow(2, i) >= 0) { 
        ob++;
        n -= Math.pow(2, i);
      }
    }
    return ob;
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
    new CF458C().run(); 
  }
}
