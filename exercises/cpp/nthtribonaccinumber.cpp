/* SOLUTION 1 */ 
class Solution {
public:
    int tribonacci(int n) {
      vector<int> res; 
      res.push_back(0); 
      res.push_back(1);
      res.push_back(1);
      for (int i = 3; i <= n; i++)
        res.push_back(res[i-1] + res[i-2] + res[i-3]);
      return res[n];
    }
};

/* SOLUTION 2 */
/* All tests passed  */
class Solution {
public:
    int tribonacci(int n) 
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 1 || n == 2)
        {
            return 1;
        }
        else
        {
            vector<int> container(n+1);
            container[0] = 0;
            container[1] = 1;
            container[2] = 1;
            for (int i = 3; i <= n; i++)
            {
                container[i] = container[i-1] + container[i-2] + container[i-3];
            }
            return container[n];
        }
    }
};
