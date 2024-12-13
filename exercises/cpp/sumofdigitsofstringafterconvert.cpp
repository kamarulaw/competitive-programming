/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int getLucky(string s, int k) 
    {
        vector<int> v;
        for (int i = 0; i < s.length(); i++)
        {
            v.push_back((int)(s[i] - 'a' + 1));
        }   
        int sum = 0;  
        for (int i = 0; i < v.size(); i++)
        {
            int num = v[i];
            while (num > 0)
            {
                sum += (num % 10);
                num /= 10;
            }
        }
        int kk = 1;
        int newsum = 0;
        while (kk < k)
        {
            while (sum > 0)
            {
                newsum += (sum % 10);
                sum /= 10;
            }
            sum = newsum;
            newsum = 0; 
            kk++;
        }
        return sum;
    }
};
