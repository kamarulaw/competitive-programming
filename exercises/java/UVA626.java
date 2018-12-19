import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 
import java.util.Collections; 

public class UVA626 { 
  public static void solve() throws IOException { 
    int elem1, elem2; 
    int n = ni(); 
    ArrayList<Integer> arr = new ArrayList(); 
    ArrayList<ArrayList> A = new ArrayList(); 
    while (n != 0) {  
      int[][] mat = getMat(n);
      for (int i = 0; i < n; i++) { 
        for (int j = 0; j < n; j++) { 
          if (mat[i][j] == 0)
            continue; 
          else { 
            for (int k = 0; k < n; k++) {  
              if (mat[j][k] == 0)
                continue; 
              else { 
                if (mat[k][i] == 1) { 
                  arr.add(i + 1);
                  arr.add(j + 1);
                  arr.add(k + 1);
                  Collections.sort(arr);
                  if (!A.contains(arr))
                    A.add(arr);
                  arr = new ArrayList();
                }
              }
            }
          }
        }
      }
      for (int i = 0; i < A.size(); i++)
        System.out.println(A.get(i).toString());
      n = ni(); 
    }
  }
  
  public static int[][] getMat(int n) throws IOException { 
    int[][] mat = new int[n][n];
    for (int i = 0; i < n; i++) 
      for (int j = 0; j < n; j++)
        mat[i][j] = ni();
    return mat; 
  }
  
  
  public static BufferedReader br; 
  public static StringTokenizer st; 
  public static PrintWriter out; 
  
  public static String nextToken() throws IOException {
    while(st == null || !st.hasMoreTokens()) 
      st = new StringTokenizer(br.readLine());
    return st.nextToken(); 
  }

  public static String nextLine() throws IOException {
    return br.readLine();
  }
  
  public static int ni() throws IOException {
    return Integer.parseInt(nextToken());
  }
  
  public static long nl() throws IOException {
    return Long.parseLong(nextToken());
  }
  
  public static double nd() throws IOException {
    return Double.parseDouble(nextToken());
  }

  public static void main(String args[]) throws IOException { 
    br = new BufferedReader(new InputStreamReader(System.in));
    out = new PrintWriter(new OutputStreamWriter(System.out));
    //br = new BufferedReader(new FileReader("in.txt"));
    //out = new PrintWriter(new FileWriter("out.txt"));
    solve(); 
    out.close();
  }

}
