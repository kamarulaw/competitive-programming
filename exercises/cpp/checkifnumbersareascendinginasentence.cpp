/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool areNumbersAscending(string s) 
    {
        vector<int> ints;
        int str_ind = INT_MIN;
        int end_ind = INT_MIN;
        for (int i = 0; i < s.length(); i++)
        {
            if (0 <= s[i] - '0' && s[i] - '0' <= 9)
            {
                if (str_ind == INT_MIN)
                {
                    str_ind = i;
                    end_ind = i;
                }
                if (str_ind != INT_MIN)
                {
                    end_ind = i;
                }
            }
            else
            {
                if (str_ind != INT_MIN)
                {
                    if (str_ind - end_ind + 1 == 1)
                    {
                        ints.push_back(s[str_ind] - '0');
                    }
                    else 
                    {
                        ints.push_back(stoi(s.substr(str_ind,end_ind-str_ind+1)));
                    }
                    str_ind = INT_MIN;
                    end_ind = INT_MIN;
                }
            }
        }
        if (str_ind != INT_MIN)
        {
            if (str_ind - end_ind + 1 == 1)
            {
                ints.push_back(s[str_ind] - '0');
            }    
            else
            {
                ints.push_back(stoi(s.substr(str_ind,end_ind-str_ind+1)));
            }
        }
        for (int i = 1; i < ints.size(); i++)
        {   
            if (ints[i] <= ints[i-1])
            {
                return false;
            }
        }
        return true;
    }
};
