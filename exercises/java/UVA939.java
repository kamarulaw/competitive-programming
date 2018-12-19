import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.util.TreeMap; 
import java.util.Set; 

public class UVA939 {
  
  public static void solve() throws IOException { 
    int N = ni(); 
    String p1 = "";
    String p2 = "";
    TreeMap<String, Person> t = new TreeMap(); 
    for (int i = 0; i < N; i++) {
      String[] comps = nextLine().split("\\+");
      p1 = comps[0];
      p2 = comps[1];
      if (p2 == "non-existent" || p2 == "recessive" || p2 == "dominant")
        t.put(p1, new Person(p1, p2));
      else {
        if (!t.containsKey(p2)) 
          t.put(p2, new Person(p1, 1));
        else { 
         t.put(p2, new Person(t.get(p2).p1, p1, 2)); 
        }
      }
    }
    Set keys = t.keySet(); 
    for (Object key: keys)
      System.out.println(key + " " + getTrait(t.get(key), t));
  }
  
  public static String getTrait(Person a, TreeMap<String, Person> t) { 
    if (a.num == -1)
      return a.trait; 
    else { 
      String pt1 = getTrait(t.get(a.p1), t);
      String pt2 = getTrait(t.get(a.p2), t);
      if (pt1 == "dominant" || pt2 == "dominant")
        return "dominant";
      else 
        return "recessive";
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

class Person { 
  String trait; 
  String p1 = ""; 
  String p2 = ""; 
  int num = 0; 
  public Person(String s1, String s2) {
    this.trait = s2;
    this.p1 = "";
    this.p2 = "";
    this.num = -1; 
  }  
  public Person(String s1, int num) { 
    this.p1 = s1; 
    this.num = 1; 
  }
  public Person(String s1, String s2, int num) { 
    this.p1 = s1; 
    this.p2 = s2;
    this.num = 2;
  }
}


