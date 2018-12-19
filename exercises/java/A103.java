import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class A103 { 
  
  public void solve() throws IOException { 
    int n = ni(); 
    int max = 0; 
    int min = 0; 
    int minidx = 0; 
    int maxidx = 0; 
    int temp = 0; 
    int ans = 0; 
    for (int i = 0; i < n; i++) { 
      temp = ni();
      if (i == 0) { 
        max = temp; 
        min = temp; 
        maxidx = 0; 
        minidx = 0; 
      }
      if (i != 0) { 
        if (temp > max) { 
          max = temp; 
          maxidx = i; 
        }
        if (temp <= min) { 
          min = temp; 
          minidx = i; 
        }
      }
    }
    
    if (maxidx < minidx) { 
      ans += maxidx; 
      ans += n - minidx - 1; 
    } else { 
      ans += maxidx - 1; 
      ans += (n - 1 - minidx);
    }
    System.out.println(ans);
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
    new A103().run(); 
  }
}

