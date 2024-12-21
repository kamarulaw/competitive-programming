/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 8 of 36 */
class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        set<double> avgs;
        sort(nums.begin(), nums.end());
        while (nums.size() > 0)
        {
            int tot = 0;
            nums.erase(nums.begin()+0);
            nums.erase(nums.begin()+nums.size());
            for (int i = 0; i < nums.size(); i++)
            {
                tot += nums[i];
            }
            avgs.emplace((double)tot/nums.size());
        }    
        return avgs.size();
    }
};

/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int distinctAverages(vector<int>& nums) 
    {
        int sol = 0;
        map<string,int> m;
        while (nums.size() > 0)
        {
            int min_elem = INT_MAX;
            int max_elem = INT_MIN;
            int min_index = INT_MAX;
            int max_index = INT_MAX;
            for (int i = 0; i < nums.size(); i++)
            {
                if (nums[i] < min_elem)
                {
                    min_elem = nums[i];
                    min_index = i;
                }
                if (nums[i] > max_elem)
                {
                    max_elem = nums[i];
                    max_index = i;
                }
            }
            int avg = (max_elem + min_elem) / 2;
            string avg_ = "";
            avg_ += to_string(avg);
            if ((max_elem + min_elem) % 2 == 1)
            {
                avg_ += '.'; avg_ += '5';
            }
            m[avg_]++;
            vector<int> remove = {min_index, max_index}; sort(remove.begin(),remove.end());
            nums.erase(nums.begin() + remove[1]);
            nums.erase(nums.begin() + remove[0]);
        }     
        return m.size();
    }
};
