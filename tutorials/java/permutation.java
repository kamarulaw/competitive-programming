
public class permutation {
  public void permute() {
    String s = "abc";
    int len = s.length(); 
    boolean[] used = new boolean[len];
    char[] word = s.toCharArray(); 
    StringBuffer out = new StringBuffer(); 
    doPermute(used, word, 0, len, out);
  }
  
  public void doPermute(boolean[] used, char[] word, int start, int len, StringBuffer out) {
     if (start == len)
       System.out.println(out.toString());
     else  { 
       for (int i = 0; i < len; i++) { 
         if (used[i] == false) { 
           out.append(word[i]);
           used[i] = true; 
           doPermute(used, word, start + 1, len, out);
           used[i] = false;
           out.setLength(out.length() - 1);
         }
       }
     }
  }
  
  public void run() { 
    permute();
  }
  
  public static void main(String[] args) { 
    new permutation().run(); 
  }
}
