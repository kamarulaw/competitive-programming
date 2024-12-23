/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isBalanced(string num) 
    {
        map<int,int> m;
        for (int i = 0; i < num.length(); i++)
        {
            if (i % 2 == 0)
            {
                m[1] += (num[i] - '0');
            }
            else  
            {
                m[0] += (num[i] - '0');
            }
        }   
        return m[0] == m[1];
    }
};
