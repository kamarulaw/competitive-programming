

import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 

public class B1 { 
  
  public void solve() throws IOException {
    int firstletter = (int)'A';
    int n = ni(); 
    for (int i = 0; i < n; i++) { 
      String fname = nextLine(); 
      String lets = fname.replaceAll("[0-9]", " ");
      String nums = fname.replaceAll("[A-Z]", " ");
    
      lets = lets.replaceAll("^\\s+", ""); // remove left space
      lets = lets.replaceAll("\\s+$", ""); // remove right space
    
      nums = nums.replaceAll("^\\s+", ""); 
      nums = nums.replaceAll("\\s+$", ""); 
   
      String[] arr = nums.split("\\s+");
      if (arr.length == 1) { 
        int numchars = lets.length(); 
        int row = Integer.valueOf(nums);
        int col = (int)nums.charAt(numchars - 1) - firstletter + 1;
        System.out.println(row);
        System.out.println(col);
      
        while (numchars > 1)  
          col += ((int)nums.charAt(numchars - 1) - firstletter + 1) * 26; 
     
        System.out.println("R" + row + "C" + col);
      } else { 
        
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
    new B1().run(); 
  }
}
