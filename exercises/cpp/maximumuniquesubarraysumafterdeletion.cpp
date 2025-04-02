/* SOLUTION 1 */
/* psf */ 

class Solution {
public:
    int n; 
    vector<int> nums_;
    vector<vector<int>> subseqs;
    int sum(vector<int> subseq)
    {
        int sol = 0;
        for (int i = 0; i < subseq.size(); i++)
        {
            sol+=subseq[i];
        }
        return sol;
    }
    
    bool unique(vector<int> subseq)
    {
        map<int,int> m;
        for (int i = 0; i < subseq.size(); i++)
        {
            m[subseq[i]]++;
        }
        if (m.size()!=subseq.size())
        {
            return false;
        }
        {
            return true;
        }
    }

    void generate(int i,vector<int> subseq)
    {
        if (subseq.size()>0)
        {
            subseqs.push_back(subseq);
        }
        generate(i+1,subseq);
        subseq.push_back(nums_[i]);
        generate(i+1,subseq);
    }

    int maxSum(vector<int>& nums) 
    {
        n = nums.size();
        nums_ = nums;
        generate(0,{});
        int sol = INT_MIN;
        for (int i = 0; i < subseqs.size(); i++)
        {
            if (unique(subseqs[i]))
            {
                sol = max(sol,sum(subseqs[i]));
            }
        }
        return sol;
    }
};
