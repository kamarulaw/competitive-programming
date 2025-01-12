/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> cellsInRange(string s) 
    {
        vector<string> sol;
        char char1 = s[0];
        char char2 = s[3];
        int __int1 = s[1] - '0';
        int __int2 = s[4] - '0';
        map<int,char> m;
        m[1] = '1'; m[2] = '2'; m[3] = '3'; 
        m[4] = '4'; m[5] = '5'; m[6] = '6';
        m[7] = '7'; m[8] = '8'; m[9] = '9';
        if (__int2 > __int1)
        {
            for (int i = (int)char1; i <= (int)char2; i++)
            {
                for (int j = __int1; j <= __int2; j++)
                {
                    string res = "";
                    res += char(i);
                    res += m[j];
                    sol.push_back(res);
                }
            }
        }
        else
        {
            for (int i = (int)char1; i <= (int)char2; i++)
            {
                string res = "";
                res += char(i);
                res += m[__int1];
                sol.push_back(res);
            }
        }
        return sol;
    }
};
