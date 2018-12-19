import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Vector; 

public class UVA101 {
	
	public static void solve() throws IOException { 
		int n = ni(); 
		loc[] mat = new loc[n];
		for (int i = 0; i < n; i++)
			mat[i].set(i, 0);
		
		String nl = nextLine();
		
		while(nl != "quit") { 
			String[] l = nl.split("\\s");
			int a = Integer.parseInt(l[1]);
			int b = Integer.parseInt(l[3]);
			
			if (l[0] == "move")  {
				if (l[2] == "onto") 
					mat = mOn(mat, a, b);
				else 
					mat = mOv(mat, a, b);
			} else { 
				if (l[2] == "onto")
					mat = pOn(mat, a, b);
				else 
					mat = pOv(mat, a, b);
			}
		}
	}
	
	public static loc[] mOn(loc[] m, int a, int b) {
		int aX = m[a].x; 
		int aY = m[a].y; 
		int bX = m[b].x; 
		int bY = m[b].y; 
		int ml = m.length;
		for (int i = 0; i < ml; i++) {
			 if (m[i].x == aX) { 
				 if (m[i].y > aY) { 
					 m[i].x = i; 
					 m[i].y = 0;
				 }
			 }
			 if (m[i].x == bX) { 
				 if (m[i].y > bY) { 
					 m[i].x = i; 
					 m[i].y = 0; 
				 }
			 }
		}
		m[a].x = bX; 
		m[a].y = bY + 1; 
		return m; 
	}
	
	public static loc[] mOv(loc[] m, int a, int b) { 
		int aX = m[a].x; 
		int aY = m[a].y; 
		int bX = m[b].x; 
		int bY = m[b].y; 
		int ml = m.length;
		for (int i = 0; i < ml; i++) {
			 if (m[i].x == aX) { 
				 if (m[i].y > aY) { 
					 m[i].x = i; 
					 m[i].y = 0;
				 }
			 }
		}
		m[a].x = bX; 
		m[a].y = bY + 1;
		return m; 
	}
	
	public static loc[] pOn(loc[] m, int a, int b) { 
	  int aX = m[a].x; 
    int aY = m[a].y; 
    int bX = m[b].x; 
    int bY = m[b].y; 
    int ml = m.length;
    Vector<loc> oA = new Vector(); 
    for (int i = 0; i < ml; i++) {
       if (m[i].x == bX) { 
         if (m[i].y > bY) { 
           m[i].x = i; 
           m[i].y = 0;
         }
       }
       if (m[i].x == aX) { 
         if (m[i].y > aY) {
            
         }
       }
    }
	  return m; 
	}
	
	public static loc[] pOv(loc[] m, int a, int b) { 
		return m;
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

class loc { 
	int x; 
	int y; 
	
	public loc(int x, int y) { 
		this.x = x; 
		this.y = y; 
	}
	
	public void set(int x, int y) {
		this.x = x; 
		this.y = y; 
	}
}
