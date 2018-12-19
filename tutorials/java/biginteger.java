import java.io.BufferedReader; 
import java.io.InputStreamReader; 
import java.io.OutputStreamWriter; 
import java.io.PrintWriter; 
import java.io.IOException;
import java.io.FileReader; 
import java.io.FileWriter;
import java.util.StringTokenizer; 
import java.math.BigInteger; 

public class biginteger { 
  
  public void solve() throws IOException { 
    //UVA10925();
    //UVA10551();
    //UVA10814();
    //UVA1230(); 
  }
  
  public void UVA10925() throws IOException { 
    /*
     * UVA 10925 w/ no loop
     * N: # of items in the bill 
     * F: # of friends to split payment
     * Next N lines contain values 1 <= V <= 10^20
     */
    
    int N = ni();
    int F = ni(); 
    BigInteger sum = BigInteger.ZERO;
    for (int i = 0; i < N; i++) { 
      BigInteger V = new BigInteger(String.valueOf(nextLine()));
      sum = sum.add(V);
    }
    System.out.println("The total is: " + sum);
    System.out.println("Each friend should pay: " + sum.divide(BigInteger.valueOf(F))); 
  }
  
  public void UVA10551() throws IOException { 
    /* 
     * UVA 10551 w/ no loop 
     * b: base 
     * p: 1st base b integer 
     * m: 2nd base b integer
     * output: (p % m)_b
     */
    int b = ni();
    BigInteger p = new BigInteger(nextToken(), b);
    BigInteger m = new BigInteger(nextToken(), b);
    System.out.println(p.mod(m).toString(b));
  }
  
  public void UVA10814() throws IOException { 
    /* 
     * UVA 10814 w/ no loop 
     * p: 1st number
     * q: 2nd number
     * ouptut: p / q simplified
     */
    
    BigInteger p = new BigInteger(String.valueOf(nextToken()));
    String div = nextToken(); 
    BigInteger q = new BigInteger(String.valueOf(nextToken()));
    BigInteger gcd = p.gcd(q);
    p = p.divide(gcd);
    q = q.divide(gcd);
    System.out.print(p.toString() + " " + div + " " + q.toString());
  }
  
  public void UVA1230() throws IOException { 
    /* 
     * UVA 1230 w/ no loop
     * x: first num 
     * y: second num 
     * n: third num 
     * output: (x ^ y) mod n
     */
    
    BigInteger x = new BigInteger(String.valueOf(nextToken()));
    BigInteger y = new BigInteger(String.valueOf(nextToken()));
    BigInteger n = new BigInteger(String.valueOf(nextToken()));
    System.out.println(x.modPow(y,n));
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
    new biginteger().run(); 
  }
}

