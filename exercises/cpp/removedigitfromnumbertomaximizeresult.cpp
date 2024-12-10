/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string removeDigit(string number, char digit) 
    {
        vector<int> digitinds;
        vector<string> nums;
        for (int i = 0; i < number.length(); i++)
        {
            if (number[i] == digit)
            {
                digitinds.push_back(i);
            }
        }    
        for (int i = 0; i < digitinds.size(); i++)
        {
            string cnum = "";
            for (int j = 0; j < number.length(); j++)
            {
                if (j != digitinds[i])
                {
                    cnum += number[j];
                }
            }
            nums.push_back(cnum);
        }
        sort(nums.begin(), nums.end());
        return nums[nums.size()-1];
    }
};
