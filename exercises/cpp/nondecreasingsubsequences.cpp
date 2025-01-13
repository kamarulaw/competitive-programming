/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> nums_;
    vector<vector<int>> subseqs;
    void generate(int i, int n, vector<int> subseq)
    {
        if (i == n)
        {
            if (subseq.size() > 1)
            {
                subseqs.push_back(subseq);
            }
            return;
        }
        generate(i+1,n,subseq);
        subseq.push_back(nums_[i]);
        generate(i+1,n,subseq);
    }

    bool isnondec(vector<int> arr)
    {
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i] < arr[i-1])
            {
                return false;
            }
        }
        return true;
    }

    vector<vector<int>> findSubsequences(vector<int>& nums) 
    {
        int n = nums.size();
        nums_ = nums;
        generate(0,n,{});
        set<vector<int>> sol;
        for (int i = 0; i < subseqs.size(); i++)
        {
            if (isnondec(subseqs[i]))
            {
                sol.insert(subseqs[i]);
            }
        }
        vector<vector<int>> vsol(sol.begin(),sol.end());
        return vsol;
    }
};
