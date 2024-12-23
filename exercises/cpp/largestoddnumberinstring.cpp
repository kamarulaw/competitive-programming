/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 112 of 196 */
class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n = num.size();
        vector<unsigned long long> oddnums;
        if (stoull(num) % 2 == 1)
        {
            oddnums.push_back(stoull(num));
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                string subnum = num.substr(i,j);
                if (stoull(subnum) % 2 == 1)
                {
                    oddnums.push_back(stoull(subnum));
                }
            }
        }
        sort(oddnums.begin(),oddnums.end());
        if (oddnums.size() >= 1)
        {
            return to_string(oddnums[oddnums.size()-1]);    
        }
        return "";
    }
};

/* SOLUTION 2 */
/* RUNTIME ERROR ON CASE 105 of 196 */
class Solution {
public:
    string largestOddNumber(string num) 
    {
        int n = num.length();
        vector<int> odds;
        for (int i = 0; i < n; i++)
        {
            for (int j = 1; j <= n-i; j++)
            {
                if (j == 1 && (num[i] - '0') % 2 == 1)
                {
                    odds.push_back(num[i] - '0');
                }
                if (num.substr(i,j).length() > 1 && stoi(num.substr(i,j)) % 2 == 1)
                {
                    odds.push_back(stoi(num.substr(i,j)));
                }
                
            }
        }   
        if (odds.size() >= 1)
        {
            sort(odds.begin(),odds.end());
            return to_string(odds[odds.size()-1]);
        }
        else
        {
            return "";
        }
    }
};
