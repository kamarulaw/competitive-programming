/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int numDifferentIntegers(string word) 
    {
        set<string> nums;
        int ind = 0;
        int n = word.length();
        while (ind < n)
        {
            string cnum = "";
            while (ind < n && 0 <= word[ind] - '0' && word[ind] - '0' <= 9)
            {
                cnum += word[ind]; ind++;
            }
            nums.emplace(cnum);
            while ((ind < n) && (word[ind] - '0' < 0 || word[ind] - '0' > 9))
            {
                ind++;
            } 
        }
        int count = 0;
        set<string> nums_;
        for (auto elem : nums)
        {
            if (elem.length() >= 1)
            {
                int i = 0;
                int n = elem.length();
                while (i < n)
                {                    
                    if (elem[i] != '0')
                    {
                        nums_.emplace(elem.substr(i,elem.length()-i));
                        break;
                    }
                    while (i < n && elem[i] == '0')
                    {
                        i++;
                    }
                    nums_.emplace(elem.substr(i,elem.length()-i));
                }
            }
        }
        return nums_.size();
    }
};
