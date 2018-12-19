import java.util.Arrays; 
import java.util.ArrayList;
import java.util.Iterator; 

public class intervalcovering {  
  public static class coord implements Comparable<coord> {
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
      else { 
        if (this.y > b.y)
          return -1; 
        else if (this.y < b.y)
          return 1; 
        else 
          return 0; 
      }
    } 
  }
  
  
  public void run() {
    coord[] coords = new coord[7];
    coords[0] = new coord(1, 3);
    coords[1] = new coord(2, 4);
    coords[2] = new coord(1, 4);
    coords[3] = new coord(5, 6);
    coords[4] = new coord(5, 7);
    coords[5] = new coord(8, 9);
    coords[6] = new coord(8, 12);
    
    Arrays.sort(coords);
    int len = coords.length; 
    for (int i = 0; i < len; i++)
      System.out.println("(" + coords[i].x + ", " + coords[i].y + ")");
    ArrayList<coord> result = new ArrayList(); 
    int b = 0, i = 0; 
    while(i < len) {
      while (i < len && inside(coords[b], coords[i])) 
        i++; 
      result.add(coords[b]);
      if (i == len) 
        break; 
      b = i; 
    }
    
    for (int j = 0; j < result.size(); j++) 
      System.out.println("(" + result.get(j).x + ", " + result.get(j).y + ")");
  }
  
  public boolean inside(coord a, coord b) { 
    return (a.x <= b.x && b.x <= a.y) && (b.y <= a.y);
  }
  
  public static void main(String[] args) { 
    new intervalcovering().run(); 
  }
}
