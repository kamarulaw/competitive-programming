/* Combbination Sum III */ 
/* progress so far */

class Solution {
public:
    int k_;
    int n_; 
    int sum = 0;
    vector<int> nums;
    vector<vector<int>> result;

    void combinationSum3Util(int i, vector<int> container)
    {
        if (i == nums.size())
        {
            if (container.size() == k_)
            {
                sum = 0;
                for (int i = 0; i < container.size(); i++)
                {
                    cout << container[i] << " ";
                    sum += container[i];
                }
                cout << sum << endl;
                if (sum == n_)
                {
                    result.push_back(container);
                    return;
                }
                return;
            }
            return; 
        }

        combinationSum3Util(i+1, container); 
        container.push_back(nums[i]);
        combinationSum3Util(i+1, container);
    }

    vector<vector<int>> combinationSum3(int k, int n)
    {
        int k_ = k;
        int n_ = n;

        for (int i = 1; i <= 9; i++)
        {
            nums.push_back(i);
        }

        vector<int> v;
        combinationSum3Util(0,v);
        return result; 
    }
};
