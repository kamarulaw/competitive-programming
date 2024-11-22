/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        map<int,int> m;
        for(int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        reverse(arr.begin(), arr.end());
        for(int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == 0 && m[arr[i]] > 1)
            {
                return true;
            }
            else if (arr[i] != 0 && m[arr[i]/2] > 0 && (arr[i]/2) * 2 == arr[i])
            {
                cout << arr[i] << endl;
                return true;
            }        
        }
        return false;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        map<int,int> m;
        for (int i = 0; i < arr.size(); i++)
        {
            m[arr[i]]++;
        }
        for (auto it: m)
        {
            if (it.first == 0 && m[it.first] > 1)
            {
                return true;
            }
            else if (it.first != 0 && m[it.first] > 0 &&  m[2 * it.first] >= 1)
            {
                return true;
            }
        }
        return false;    
    }
};
