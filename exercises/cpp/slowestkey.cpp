/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 66 of 109 */
class Solution {
public:
    char slowestKey(vector<int>& releaseTimes, string keysPressed) 
    {
        map<char,unsigned long long int> m;
        for (int i = 0; i < releaseTimes.size(); i++)
        {
            if (i == 0)
            {
                m[keysPressed[i]] += releaseTimes[i];
            }
            else
            {
                m[keysPressed[i]] += (releaseTimes[i] - releaseTimes[i-1]); 
            }
        }
        char max_elem = ' ';    
        unsigned long long int max_timeelapsed = 0;
        for (auto it : m)
        {
            if (it.second > max_timeelapsed )
            {
                max_elem = it.first;
                max_timeelapsed = it.second;
            }
            else if (it.second == max_timeelapsed && it.first - max_elem > 0)
            {
                max_elem = it.first;
            }
        }
        cout << m['o'] << " " << m['n'];
        return max_elem;
    }
};
