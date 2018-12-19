import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.ArrayList; 

public class ECF36C { 
  //Permute Digits
  ArrayList<Integer> permutations = new ArrayList(); 
  public void solve() throws IOException { 
    int a = ni(); 
    int b = ni(); 
    int len = 0;
    int tempa = a; 
    while (tempa > 0) { 
      len++; 
      tempa /= 10; 
    }
    StringBuilder ans = new StringBuilder();
    int[] arr = new int[len];
    boolean[] used = new boolean[len];
    for (int i = 0; i < len; i++) { 
      arr[i] = a % 10; 
      a /= 10; 
    }
    
    doPermute(ans, 0, len, arr, used);
    
    int temp;
    int currmax = Integer.MIN_VALUE; 
    for (int i = 0; i < permutations.size(); i++) {
      temp = permutations.get(i); 
      if (currmax < temp && temp < b)
        currmax = temp; 
    }
    System.out.println(currmax);
  }
  
  public void doPermute(StringBuilder ans, int id, int len, int[] arr, boolean[] used) { 
    if (id == len) { 
      int answer = Integer.parseInt(ans.toString());
      permutations.add(answer);
      return; 
    } else { 
      for (int i = 0; i < len; i++) { 
        if (used[i] == false) { 
          used[i] = true; 
          ans.append(Character.forDigit(arr[i], 10));
          doPermute(ans, id + 1, len, arr, used);
          used[i] = false; 
          ans.setLength(ans.length() - 1);
        }
      }
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
    new ECF36C().run(); 
  }
}
