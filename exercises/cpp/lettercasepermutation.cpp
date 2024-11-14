/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    set<string> combinations;
    void generate(int i, int n, string s, vector<int> charactertracker, vector<bool> casechanged)
    {
        if (i == n)
        {
            string perm = "";
            for (int j = 0; j < n; j++)
            {
                if (charactertracker[j] != -1)
                {
                    if (casechanged[j] == false)
                    {
                        perm += s[j];
                    }
                    else 
                    {
                        if (tolower(s[j]) == s[j])
                        {
                            perm += toupper(s[j]);
                        }
                        else
                        {
                            perm += tolower(s[j]);
                        }
                    }
                }
                else 
                {
                    perm += s[j];
                }
            }
            combinations.emplace(perm);
            return;
        }

        generate(i+1,n,s,charactertracker,casechanged);
        casechanged[i] = true;
        generate(i+1,n,s,charactertracker,casechanged);
    }

    vector<string> letterCasePermutation(string s) 
    {
        int n = s.length(); 
        cout << (int)'a' << " " << (int)'z' << " " << (int)'A' << " " << (int)'Z' << endl;
        vector<int> charactertracker;
        for (int i = 0; i < n; i++)
        {
            int cti = (int)s[i];
            if ((cti >= 65 && cti <= 90) || 
                (cti >= 97 && cti <= 122))
            {
                charactertracker.push_back(1);
            }
            else
            {
                charactertracker.push_back(-1);
            }
        }
        vector<bool> casechanged(n, false);
        generate(0,n,s,charactertracker, casechanged);
        vector<string> vcombinations(combinations.begin(), combinations.end());
        return vcombinations;
    }
};
