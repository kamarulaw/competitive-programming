import java.util.Scanner; 
import java.util.Arrays; 

public class queens {
  private int n = 4;
  private int[] queenrows = new int[n];
  public boolean isLegal(int r, int c) { 
    for (int qcol = 0; qcol < c; qcol++) { 
      int prevrow = queenrows[qcol];
      if (r == prevrow || c == qcol || Math.abs(prevrow - r) == Math.abs(c - qcol))
        return false; 
     }
    return true; 
  }
  
  public int solve(int col) {  
    if (col == n) {
      outputSolution(queenrows);
      return 0; 
    } else { 
      for (int row = 0; row < n; row++) { 
        if (isLegal(row, col)) { 
          queenrows[col] = row;
          int solution = solve(col + 1);
          if (solution != -1)
            return solution; 
          queenrows[col] = -1; 
        }
      }
      return -1; 
    }
  }
  
  public void outputSolution(int[] row) { 
    String basecomp = "-";
    StringBuffer sb = new StringBuffer();
    for (int i = 0; i < n; i++)
      sb.append(basecomp);
    String base = sb.toString();
    for (int col = 0; col < row.length; col++) {
      int trow = row[col];
      char[] carr = base.toCharArray(); 
      carr[trow] = 'Q'; 
      System.out.println(Arrays.toString(carr));
    } 
  }
  
  public void run() { 
    solve(0);
  }
  
  public static void main(String args[]) { 
    new queens().run(); 
  }
}
