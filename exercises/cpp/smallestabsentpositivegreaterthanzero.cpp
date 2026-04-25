/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int smallestAbsent(vector<int>& nums) 
    {
        map<int,int> m;
        vector<int> m_v;
        double avg = 0.0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (nums[i] > 0)
            {
                m[nums[i]]++;
            }
            avg += nums[i];
        }    
        avg /= ((1.0)*n);

        if (m.size() == 0)
        {
            return 1;
        }
        
        for (auto it : m)
        {
            m_v.push_back(it.first);
        }
        sort(m_v.begin(), m_v.end());
        
        int greatest = m_v[m_v.size()-1];

        for (int i = 1; i <= greatest; i++)
        {
            if (i > avg && m[i] < 1)
            {
                return i;
            }
        }
        return greatest+1;
    }
};
