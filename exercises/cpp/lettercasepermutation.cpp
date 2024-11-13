/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<string> combinations;
    bool search
    void generate(int i, int numalpha, string s, vector<bool> combinationswitch, vector<int> alpha_inds)
    {
        if (i > n)
        {
            combinations.push_back(word);
            return;
        }
        int s_len = s.length();
        for (int j = 0; j < s_len; j++)
        {

        }
        generate(i+1,n,s,combinationswitch);
        combinationswitch[i] = true;
        generateu(i+1,n,s,combinationswitch);
    }

    vector<string> letterCasePermutation(string s) 
    {
        int n = s.size(); vector<int> alpha_inds;
        cout << (int)'a' << " " << (int)'z' << " " << (int)'A' << " " << (int)'Z' << endl;
        for (int i = 0; i < n; i++)
        {
            char c = (int)[s[i]];
            if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
            {
                alpha_inds.push_back(i);
            }
        }
        int numalpha = alpha_inds.size();
        vector<bool> combinationswitch(numalpha, false);
        generate(0,numalpha,s,combinationswitch, alpha_inds);
        return {};
    }
};
