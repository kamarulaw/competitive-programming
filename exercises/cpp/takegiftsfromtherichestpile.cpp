/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) 
    {
        int kk = 0;
        int n = gifts.size();
        vector<vector<int>> gifts_;
        map<int,int> i_fs;
        for (int i = 0; i < n; i++)
        {
            gifts_.push_back({i,gifts[i]});
            i_fs[i] = floor(pow(gifts[i],.5));
        }
        while (kk < k)
        {
            int max_elem = INT_MIN;
            int max_index = INT_MIN;
            for (int i = 0; i < n; i++)
            {
                if (gifts_[i][1] > max_elem)
                {
                    max_elem = gifts_[i][1];
                    max_index = i;
                }
            }
            kk++; 
            //gifts_[max_index][1] = i_fs[max_index];
            gifts_[max_index][1] = floor(pow(gifts_[max_index][1],.5));
        }    
        long long sol = 0;
        for (int i = 0; i < n; i++)
        {
            cout << gifts_[i][1] << " ";
            sol += gifts_[i][1];
        }
        return sol;
    }
};
