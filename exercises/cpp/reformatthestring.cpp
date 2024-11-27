/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reformat(string s) 
    {
        int n = s.length();
        vector<char> alpha;
        vector<char> numeric;
        for (int i = 0; i < n; i++)
        {
            int c = (int)s[i];
            if ((int)'0' <= c && c <= (int)'9')
            {
                numeric.push_back(s[i]);
            }
            else 
            {
                alpha.push_back(s[i]);
            }
        }
        if (abs((int)alpha.size() - (int)numeric.size()) > 1)
        {
            return "";
        }    
        string ans = ""; 
        int size_alpha = alpha.size();
        int size_numeric = numeric.size();
        vector<char> arr1;
        vector<char> arr2;
        if (size_numeric >= size_alpha)
        {
            arr1 = numeric;
            arr2 = alpha;
        }
        else 
        {
            arr1 = alpha;
            arr2 = numeric;
        }
        for (int i = 0; i < min(arr1.size(),arr2.size()); i++)
        {
            ans += arr1[i];
            ans += arr2[i];
        }
        for (int i = min(arr1.size(),arr2.size()); i < arr1.size(); i++)
        {
            ans += arr1[i];
        }
        return ans;
    }
};
