import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays;        

public class dp_subsetsum { 
  
  public void solve() throws IOException { 
    int[] values = {2, 3, 7, 8, 10};
    Arrays.sort(values); // might not need to be sorted...will look into later
    // Check if program works
    for (int i = 0; i < 1000; i++) 
      if (dp_ss(values, i) != recursive_ss(values, 0, 0, i)) {
        System.out.println("Difference on value: " + i);
        return; 
      }
    System.out.println("All tests passed...");
    
    combinations("abc", 0, new StringBuilder());
  }
 
  
  public boolean recursive_ss(int[] arr, int id, int cumsum, int val) { 
    int len = arr.length; 
    if (cumsum == val)
      return true; 
    if (cumsum > val || id == len)
      return false;  
    return recursive_ss(arr, id + 1, cumsum + arr[id], val) ||
        recursive_ss(arr, id + 1, cumsum, val);
  }
  
  public boolean dp_ss(int[] values, int sum) {
    int numvals = values.length; 
    boolean[][] memo = new boolean[numvals][sum + 1];
    for (int i = 0; i <= sum; i++)
      memo[0][i] = (i == 0 || i == values[0]) ? true : false;
    for (int i = 1; i < numvals; i++)  
      for (int j = 0; j <= sum; j++) 
        memo[i][j] = (j == 0 || j == values[i] || memo[i - 1][j] == true || (j - values[i] >= 0 && memo[i - 1][j - values[i]] == true)) ? true : false; //lols 
    return memo[numvals - 1][sum];
  }
  
  public void combinations(String S, int id, StringBuilder result) {
    int len = S.length(); 
    if (id == len) {
      System.out.println(result.toString());
      return; 
    }
    combinations(S, id + 1, result);
    combinations(S, id + 1, result.append(String.valueOf(S.charAt(id))));
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
    new dp_subsetsum().run(); 
  }

}
