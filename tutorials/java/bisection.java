public class bisection {
  
  public double solve() { 
    double a = 1.0; 
    double b = 2.0; 
    double eps = .0001; 
    double c;
    while (Math.abs(f(a) - f(b)) > eps) { 
      c = (a + b) / 2; 
      if (samesign(f(a), f(c)))  
        a = c; 
      else 
        b = c;  
    }
    return a;
  }
  
  public double f(double x) { 
    return Math.pow(x, 3) - x - 2; 
  }
  
  public boolean samesign(double i, double j) { 
    return (i > 0 && j > 0) || (i < 0 && j < 0);
  }
  
  public void run() { 
    solve(); 
  }
  
  public static void main(String args[]) { 
    new bisection().run(); 
  }
}
