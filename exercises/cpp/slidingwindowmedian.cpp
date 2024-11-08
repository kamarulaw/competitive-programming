/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 42 of 43 */
class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        vector<double> answer;
        int n = nums.size();
        for (int i = 0; i <= nums.size()-k; i++)
        {
            vector<double> v(nums.begin()+i,nums.begin()+i+k); 
            sort(v.begin(),v.end());
            if (k % 2 == 1)
            {
                answer.push_back(v[k/2]);
            }
            else 
            {
                answer.push_back((v[k/2 - 1] + v[k/2])/2);
            }
        }
        return answer;
    }
};
