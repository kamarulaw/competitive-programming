/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 7 of 104 */
class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) 
    {
        map<unsigned long long int,int> m;
        for (int i = 0; i < floor(pow(bound,.5))+1; i++)
        {
            for (int j = 0; j < floor(pow(bound,.5))+1; j++)
            {
                m[pow(x,i)+pow(y,j)] = 1;
            }
        } 
        vector<int> sol;
        for (int i = 1; i <= bound; i++)
        {
            if (m[i] == 1)
            {
                sol.push_back(i);
            }
        }   
        return sol;
    }
};
