import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class UVA957 { 
  public void solve() throws IOException { 
    int maxnpopes = -1, maxstart = 0, maxend = 0; 
    int Y = ni();
    int N = ni(); 
    int endindex; 
    int[] popes = new int[N + 1];
    for (int i = 1; i <= N; i++)
      popes[i] = ni();
    for (int i = 1; i <= N; i++) {
      endindex = search(popes, i, N, popes[i] + Y - 1);
      int npopes = endindex - i + 1;
      if (npopes > maxnpopes) { 
        maxnpopes = npopes;
        maxstart = popes[i];
        maxend = popes[endindex];
      }
    }
    System.out.println(maxnpopes + " " + maxstart + " " + maxend);
  }
  
  public int search(int[] popes, int start, int end, int upperbound) { 
    int mid = start + (end - start) / 2; 
    if (start <= end) { 
      if (popes[mid] == upperbound) {
        while (mid + 1 < end && popes[mid + 1] == upperbound)
          mid++; 
        return mid; 
      } else if (popes[mid] < upperbound) 
        return search(popes, mid + 1, end, upperbound);
       else 
         return search(popes, start, mid - 1, upperbound);
    }
    return -1; 
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
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    //out.close(); 
  }

  public static void main(String args[]) throws IOException { 
    new UVA957().run(); 
  }

}
