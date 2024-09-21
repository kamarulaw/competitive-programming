/* SOLUTION 1 */
/* All tests passed */ 
/* hard-coded brute-forced trash implementation */
class Solution {
public:
    map<char,vector<char>> digitmap;
    vector<string> letterCombinations(string digits) 
    {
        vector<char> v;
        vector<string> result;

        v.push_back('a');
        v.push_back('b');
        v.push_back('c');
        digitmap['2'] = v;
        v.clear();

        v.push_back('d');
        v.push_back('e');
        v.push_back('f');
        digitmap['3'] = v;
        v.clear();

        v.push_back('g');
        v.push_back('h');
        v.push_back('i');
        digitmap['4'] = v;
        v.clear();

        v.push_back('j');
        v.push_back('k');
        v.push_back('l');
        digitmap['5'] = v;
        v.clear();

        v.push_back('m');
        v.push_back('n');
        v.push_back('o');
        digitmap['6'] = v;
        v.clear();

        v.push_back('p');
        v.push_back('q');
        v.push_back('r');
        v.push_back('s');
        digitmap['7'] = v;
        v.clear();

        v.push_back('t');
        v.push_back('u');
        v.push_back('v');
        digitmap['8'] = v;
        v.clear();

        v.push_back('w');
        v.push_back('x');
        v.push_back('y');
        v.push_back('z');
        digitmap['9'] = v;
        v.clear();

        if (digits.length() == 0)
        {
            return result;
        }
        else if (digits.length() == 1)
        {
            char c0 = digits[0]; 
            for (int i = 0; i < digitmap[c0].size(); i++)
            {
                string ans = ""; 
                ans += digitmap[c0][i];
                result.push_back(ans);
            }
            return result;
        }
        else if (digits.length() == 2)
        {
            char c0 = digits[0]; 
            char c1 = digits[1];
            for (int i = 0; i < digitmap[c0].size(); i++)
            {
                char r0 = digitmap[c0][i];
                for (int j = 0; j < digitmap[c1].size(); j++)
                {
                    char r1 = digitmap[c1][j];
                    string ans = "";
                    ans += r0; 
                    ans += r1;
                    result.push_back(ans);
                }
            }
            return result;
        }
        else if (digits.length() == 3)
        {
            char c0 = digits[0]; 
            char c1 = digits[1]; 
            char c2 = digits[2];
            for (int i = 0; i < digitmap[c0].size(); i++)
            {
                char r0 = digitmap[c0][i];
                for (int j = 0; j < digitmap[c1].size(); j++)
                {
                    char r1 = digitmap[c1][j];
                    for (int k = 0; k < digitmap[c2].size(); k++)
                    {
                        
                        char r2 = digitmap[c2][k];
                        string ans = "";
                        ans += r0; 
                        ans += r1;
                        ans += r2;
                        result.push_back(ans);
                    }
                }
            }
            return result;
        }
        else 
        {
            char c0 = digits[0]; 
            char c1 = digits[1]; 
            char c2 = digits[2];
            char c3 = digits[3];
            for (int i = 0; i < digitmap[c0].size(); i++)
            {
                char r0 = digitmap[c0][i];
                for (int j = 0; j < digitmap[c1].size(); j++)
                {
                    char r1 = digitmap[c1][j];
                    for (int k = 0; k < digitmap[c2].size(); k++)
                    {
                        
                        char r2 = digitmap[c2][k];
                        for (int a = 0; a < digitmap[c3].size(); a++)
                        {
                            char r3 = digitmap[c3][a];
                            string ans = "";
                            ans += r0; 
                            ans += r1;
                            ans += r2;
                            ans += r3;
                            result.push_back(ans);
                        }
                    }
                }
            }
            return result;
        }
    }
};
