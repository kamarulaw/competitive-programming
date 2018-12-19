import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 

public class sp18A295w3 { 
  //MC
  private class coord implements Comparable<coord>{ 
    int x, y, k; 
    public coord(int x, int y, int k) { 
      this.x = x;
      this.y = y; 
      this.k = k; 
    }
    public int compareTo(coord b) { 
      double diff = dist(this.x, this.y) - dist(b.x, b.y);
      if (diff < 0)
        return -1; 
      else if (diff > 0)
        return 1; 
      else {
        if (this.k > b.k)
          return -1; 
        else if (this.k < b.k) 
          return 1; 
        else 
          return 0;
      }
    }
  }
  
  public void solve() throws IOException { 
    int n = ni(); 
    int s = ni();
    coord[] coords = new coord[n];
    for (int i = 0; i < n; i++) 
      coords[i] = new coord(ni(), ni(), ni());
    Arrays.sort(coords);
    for (int i = 0; i < n; i++) {
      coord temp = coords[i];
      if (temp.k + s >= 1000000) {
        System.out.println(dist(temp.x, temp.y));
        return; 
      }
      s += temp.k; 
    }
    System.out.println(-1);
  }
  
  public double dist(int x, int y) { 
    return Math.pow(Math.pow(x, 2) + Math.pow(y, 2), .5);
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
    new sp18A295w3().run(); 
  }
}
