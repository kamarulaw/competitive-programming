class Solution {
public:
    int sumofdigits(int n) { 
      int tot = 0; 
      int mod = 0; 
      while (n > 0) { 
        mod = n%10;
        tot += mod;
        n /= 10;
      }
      return tot; 
    }
  
    int countBalls(int lowLimit, int highLimit) {
      int max_ = 0; 
      map<int, int> m; 
      for (int i = lowLimit; i <= highLimit; i++) { 
        int sod = sumofdigits(i);
        m[sod]++; 
        max_ = max(max_, m[sod]);
      }
      return max_;
    }
};