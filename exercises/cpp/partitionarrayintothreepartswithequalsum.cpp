/* SOLUTION 1 */
/* psf */
class Solution {
public:
    int groupsum(vector<int> vec)
    {
        int total = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            total += vec[i];
        }
        return total;
    }

    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        // arr.size() stars && 2 bars problem
        // Example: 5 stars && 2 bars problem
        // *****
        // *|*|***
        // *|**|**
        // *|***|*
        // every set has to have at least one element
        // start with |group1| = 1, |group2| = 1, |group3| = arr.size() - 2
        // 1|1|3 -> 
        // how many ways are

        int n = arr.size();
        for (int i = 1; i <= n-2; i++) 
        {
            vector<int> group1;
            for (int ii = 0; ii < i; ii++)
            {
                group1.push_back(arr[ii]);
            }
            for (int j = i+1; j <= n-1; j++)
            {
                vector<int> group2;
                for (int jj = i; jj < j; jj++)
                {
                    group2.push_back(arr[jj]);
                }
                for (int k = j+1; j <= n; j++)
                {
                    vector<int> group3;
                    for (int kk = j; kk < k; kk++)
                    {
                        group3.push_back(arr[kk]);
                    }
                    cout << group1.size() << " " << group2.size() << " " << group3.size() << endl;
                    if (groupsum(group1) == groupsum(group3) && groupsum(group2) == groupsum(group1))
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
