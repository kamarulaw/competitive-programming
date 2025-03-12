/* SOLUTION 1 */
/* MEMORY LIMIT EXCEEDED ON CASE 18 of 84 */

class Solution {
public:
    vector<int> nums_;
    vector<vector<int>> seqs;

    bool condsat(vector<int> arr)
    {
        if (arr[0]>=arr[1]+arr[2]||arr[1]>=arr[0]+arr[2]||arr[2]>=arr[0]+arr[1])
        {
            return false;
        }
        return true;
    }

    void generate(int i,int n,vector<int> ss)
    {
        if (i==n)
        {
            if (ss.size()==3)
            {
                seqs.push_back(ss);
            }
            return;
        }
        generate(i+1,n,ss);
        ss.push_back(nums_[i]);
        generate(i+1,n,ss);
    }

    int largestPerimeter(vector<int>& nums) 
    {
        int n = nums.size();
        nums_ = nums;
        generate(0,n,{});
        int sol = 0; 
        for (int i = 0; i < seqs.size(); i++)
        {
            if (condsat(seqs[i]))
            {
                sol = max(sol,seqs[i][0]+seqs[i][1]+seqs[i][2]);
            }
        }
        return sol;
    }
};
