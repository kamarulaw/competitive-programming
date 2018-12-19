import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.Arrays; 
import java.util.Vector; 
import java.util.Comparator; 


public class UVA230 {
	
	public static void solve() throws IOException { 
		Vector<Tuple> BKS = new Vector();
		
		String b = nextLine();
		while (b != "END") { 
			BKS.add(new Tuple(b.split("\"")[0], 1));
			b = nextLine();
		}
		Tuple[] arr = new Tuple[BKS.size()]; 
		
		String nc = nextLine();
		while(nc != "END") { 
			if (nc == "SHELVE") { 
				BKS.copyInto(arr);
				Arrays.sort(arr, new SortBooks()); 
				boolean firstBookFound = false;
				String prev = ""; 
				for (Tuple t: arr) {
					if (t.val == 1)
						if (firstBookFound == false) { 
							System.out.println("Put " + t.book + " first");
							firstBookFound = true;
							prev = t.book; 
						} else { 
							System.out.println("Put " + t.book + " after " + prev);
							prev = t.book; 
						}
				}
			}
			if (nc.substring(0, 1) == "R") {
				Tuple curr = new Tuple(nc.split("\"")[1], 0);
				BKS.set(BKS.indexOf(curr), new Tuple(curr.book, 1));
			} else { 
				Tuple curr = new Tuple(nc.split("\"")[1], 1);
				BKS.set(BKS.indexOf(curr), new Tuple(curr.book, 0));
			}
			nc = nextLine(); 
		}
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

class Tuple{ 
	String book; 
	int val; 
	public Tuple(String book, int val) { 
		this.book = book;
		this.val = val; 
	}
}

class SortBooks implements Comparator<Tuple>{ 
	public int compare(Tuple a, Tuple b) { 
		String a1 = a.book; 
		String b1 = b.book; 
		return a1.compareTo(b1);
	}
}
