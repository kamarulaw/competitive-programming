/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int commonFactors(int a, int b) 
    {
        int sol = 0;
        set<int> st;
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                st.emplace(i);
            }
        }    
        for (int i = 1; i <= b; i++)
        {
            if (b % i == 0)
            {
                int ss = st.size(); 
                st.emplace(i);
                if (ss == st.size())
                {
                    sol++;
                }
            }
        }
        return sol;
    }
};
