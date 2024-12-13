/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> sol; 
        for (int i = left; i <= right; i++)
        {
            int num = i;
            bool flag = true;
            while (num > 0)
            {
                int op = num % 10;
                if (op == 0 || i % op != 0)
                {
                    flag = false;
                }
                num /= 10;
            }
            if (flag)
            {
                sol.push_back(i);
            }
        }
        return sol;
    }
};
