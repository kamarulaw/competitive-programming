/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    static bool comp(vector<int> n1,vector<int> n2)
    {
        if (n1[1]==n2[1])
        {
            return n1[0] <= n2[0];
        }
        else 
        {
            return n1[1] < n2[1];
        }
    }

    vector<int> sortByBits(vector<int>& arr) 
    {
        int n = arr.size();
        vector<vector<int>> num_counts;
        for (int i = 0; i < n; i++)
        {
            vector<int> vec;
            vec.push_back(arr[i]);
            string rep = bitset<32>(arr[i]).to_string();
            int sbc = 0;
            for (int j = 0; j < rep.length(); j++)
            {
                if (rep[j]=='1')
                {
                    sbc++;
                }
            }
            vec.push_back(sbc);
            num_counts.push_back(vec);
        }
        sort(num_counts.begin(),num_counts.end(),comp);
        vector<int> sol;
        for (int i = 0; i < n; i++)
        {
            sol.push_back(num_counts[i][0]);
        }
        return sol;
    }
};
