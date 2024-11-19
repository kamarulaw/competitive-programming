/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    void duplicateZeros(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> notinplace;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0)
            {
                notinplace.push_back(0);
                notinplace.push_back(0);
            }
            else 
            {
                notinplace.push_back(arr[i]);
            }
        }
        arr = notinplace;  
        while (arr.size() > n)
        {
            arr.erase(arr.begin()+n);
        }   
    }
};
