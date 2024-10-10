/* SOLUTION 1 */ 
/* MEMORY LIMIT EXCEEDED ON CASE 29 of 206 */
class Solution {
public:
    vector<vector<int>> subseqs;

    void subseqgen(vector<int> arr, vector<int> subseq, int i, int n)
    {
        if (i == n)
        {
            if (subseq.size() > 0)
            {
                subseqs.push_back(subseq);
            }
            return;
        }
        subseqgen(arr, subseq, i+1, n);
        subseq.push_back(arr[i]);
        subseqgen(arr, subseq, i+1, n);
    }

    bool isharmonious(vector<int> arr)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;

        for (int i = 0; i < arr.size(); i++)
        {
            mx = max(mx, arr[i]); 
            mn = min(mn, arr[i]);
        }

        int diff = mx - mn;

        bool isharm = diff == 1;

        return isharm;
    }

    int findLHS(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());

        if (nums[0] == nums[nums.size()-1])
        {
            return 0;
        }

        vector<int> subseq;
        subseqgen(nums, subseq, 0, nums.size());  

        int lhs = INT_MIN;
        /*
        for (int i = 0; i < subseqs.size(); i++)
        {
            for (int j = 0; j < subseqs[i].size(); j++)
            {
                cout << subseqs[i][j] << " ";
            }
            cout << endl; 
        }
        */
        for (int i = 0; i < subseqs.size(); i++)
        {
            if (isharmonious(subseqs[i]))
            {
                int size_subseq = subseqs[i].size();
                lhs = max(lhs, size_subseq);
            }
        }

        if (lhs != INT_MIN)
        {
            return lhs;
        }
        else 
        {
            return 0;
        }

    }
};

/* SOLUTION 2 */ 
/* MEMORY LIMIT EXCEEDED ON CASE 29 of 206 */
class Solution {
public:
    int LHS_ = 0;
    vector<int> nums_;

    bool isharmonious(vector<int> arr)
    {
        int mx = INT_MIN;
        int mn = INT_MAX;
        for (int i = 0; i < arr.size(); i++)
        {
            mx = max(mx, arr[i]); 
            mn = min(mn, arr[i]);
        }
        int diff = mx - mn;
        return diff == 1;
    }

    void subseqgen(vector<int> arr, vector<bool> visited, int i, int n)
    {
        if (i == n)
        {
            vector<int> subseq;
            for (int i = 0; i < n; i++) 
            {
                if (visited[i] == true)
                {
                    subseq.push_back(arr[i]);
                }
            }

            if (subseq.size() > 0 && isharmonious(subseq))
            {
                if (subseq.size() > LHS_)
                {
                    LHS_ = subseq.size();
                }
            }

            return;
        }

        subseqgen(arr, visited, i+1, n);
        visited[i] = true;
        subseqgen(arr, visited, i+1, n);
    }


    int findLHS(vector<int>& nums) 
    {
        nums_ = nums;

        sort(nums.begin(),nums.end());
        
        if (nums[0] == nums[nums.size()-1])
        {
            return 0;
        }

        vector<bool> visited(nums.size(), false);
        subseqgen(nums, visited, 0, nums_.size());  
        
        return LHS_;
    }
};
