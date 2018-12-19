import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Collections; 
import java.util.ArrayList; 

public class UVA10020 { 
  private static class coord implements Comparable<coord> {
    int x; 
    int y; 
    public coord(int x, int y) { 
      this.x = x; 
      this.y = y; 
    }
    
    public int compareTo(coord b) {
       if (this.x < b.x)
         return -1; 
       else if (this.x > b.x) 
         return 1; 
       else  {
         if (this.y > b.y) 
           return -1; 
         else if (this.y < b.y) 
           return 1; 
         else 
           return 0; 
       }
    }
  }
  
  public void solve() throws IOException { 
    int M = ni(); 
    int x = ni(); 
    int y = ni(); 
    ArrayList<coord> result = new ArrayList(); 
    ArrayList<coord> coords = new ArrayList();
    while (!(x == 0 && y == 0)) {
      coords.add(new coord(x,y));
      x = ni(); 
      y = ni();
    }
    
    Collections.sort(coords);
    
    int b = 0, i = 1, len = coords.size(); 
    while (i < len) { 
      while (i < len && isInside(coords.get(b), coords.get(i)))
        i++; 
      result.add(coords.get(b));
      if (i == len)
        break; 
      b = i;
    }
    
    int fz = firstZero(result);
    int fm = firstM(result, M); 
    
    if (fz == -1 || fm == -1) {
      System.out.println(0);
      return; 
    }
    
    if (fm != -1) {
      coord temp = result.get(fm);
      if (temp.x <= 0 && 0 <= temp.y) { 
        System.out.println(1);
        System.out.println(temp.x + " " + temp.y);
        return; 
      }
    }
    
    System.out.println(fm - fz + 1);
    for (int k = fz; k <= fm; k++) {
      coord curr = result.get(k);
      System.out.println(curr.x + " " + curr.y);
    }
  }
  
  public int firstZero(ArrayList<coord> coords) {
    for (int i = 0; i < coords.size(); i++) { 
      coord curr = coords.get(i);
      if (curr.x <= 0 && 0 <= curr.y)
        return i; 
    }
    return -1; 
  }
  
  public int firstM(ArrayList<coord> coords, int M) { 
    for (int i = coords.size() - 1; i >= 0; i--) { 
      coord curr = coords.get(i);
      if (curr.x <= M && M <= curr.y)
        return i; 
    }
    return -1; 
  }
  
  public boolean isInside(coord a, coord b) { 
    return (a.x <= b.x && b.x <= a.y) && (b.y <= a.y);
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
    new UVA10020().run(); 
  }

}
