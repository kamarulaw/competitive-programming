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

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    int arraysum(vector<int> arr)
    {
        int total = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            total += arr[i];
        }
        return total;
    }

    bool canThreePartsEqualSum(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> v1;
        vector<int> v2;
        vector<int> v3;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int k = j+1; j < n; j++)
                {
                    for (int ii = i; ii < j-i; ii++)
                    {
                        v1.push_back(arr[ii]);
                    }
                    for (int jj = j; jj < k-j; jj++)
                    {
                        v2.push_back(arr[jj]);
                    }
                    for (int kk = k; kk < n; kk++)
                    {
                        v3.push_back(arr[kk]);
                    }
                }
            }
            if (arraysum(v1) == arraysum(v2) && arraysum(v2) == arraysum(v3))
            {
                return true;
            }
            for (int p = 0; p < v1.size(); p++)
            {
                cout << v1[p] << " ";
            }
            cout << endl << endl;
            for (int p = 0; p < v2.size(); p++)
            {
                cout << v2[p] << " "; 
            }
            cout << endl << endl;
            for (int p = 0; p < v3.size(); p++)
            {
                cout << v3[p] << " "; 
            }
            cout << endl << endl;
            v1.clear();
            v2.clear();
            v3.clear();
        }
        return false;
    }
};
