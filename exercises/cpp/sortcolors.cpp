/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<int> merge(vetor<int> v1, vector<int> v2)
    {
        vector<int> sol;
        int i = 0; int j = 0;
        int m = v1.size(); int n = v2.size();
        while (i < m && j < n)
        {
            if (i < m && i < n)
            {
                if (v1[i] < v2[j])
                {
                    sol.push_back(v1[i]); i++;
                }
                else if (v2[j] < v1[i])
                {
                    sol.push_back(v2[j]); j++;
                }
                else
                {
                    sol.push_back(v1[i]); i++;
                    sol.push_back(v2[j]); j++;
                }
            }
            else if (i < m)
            {
                while (i < m)
                {
                    sol.push_back(v1[i]); i++;
                }
            }
            else if (j < n)
            {
                while (j < n)
                {
                    sol.push_back(v2[j]); j++;
                }
            }
        }
        return sol;
    }

    vector<int> mergesort(vector<int> arr)
    {
        int size1 = n/2;
        int size2 = n - size1;
        int n = arr.size();
        while (size1 > 1 && size2 > 1)
        {
            int size1 = n/2;
            int size2 = n - size1;
            vector<int> v1;
            vector<int> v2;
            for (int i = 0; i < size1; i++)
            {
                v1.push_back(arr[i]);
            }
            for (int i = 0; i < size2; i++)
            {
                v2.push_back(arr[i+size1]);
            }
            merge(v1,v2);
        }
    }

    void sortColors(vector<int>& nums) 
    {

    }
};
