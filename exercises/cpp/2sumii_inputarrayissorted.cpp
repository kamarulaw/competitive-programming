/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        map<int,int> m;
        vector<int> answer;
        int n = numbers.size();
        for (int i = 0; i < n; i++)
        {
            m[numbers[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            m[numbers[i]]--;
            if (m[target-numbers[i]] >= 1)
            {
                answer.push_back(i+1);
                int lo;
                int hi;
                if (target - numbers[i] >= numbers[i])
                {
                    lo = i+1; 
                    hi = n-1;
                }
                else 
                {
                    lo = 0;
                    hi = i-1;
                }
                while (lo <= hi)
                {
                    int mid = lo + (hi - lo) / 2;
                    if (numbers[mid] == target-numbers[i])
                    {
                        answer.push_back(mid+1); 
                        sort(answer.begin(),answer.end()); 
                        return answer;
                    }
                    else if (numbers[mid] < target-numbers[i])
                    {
                        lo = mid+1;
                    }
                    else 
                    {
                        hi = mid-1;
                    }
                }
            }
            m[numbers[i]]++;
        }
        return answer;    
    }
};

/* SOLUTION 2 */
/* Accepted */
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        map<int,int> m;
        int n = numbers.size();   
        for (int i = 0; i < n; i++)
        {
            m[numbers[i]] = i+1;
        }
        for (auto it : m)
        {
            int lo = 0;
            int hi = n-1;
            while (lo <= hi)
            {
                int mid = lo + (hi - lo) / 2;
                if (numbers[mid] == target - it.first)
                {
                    vector<int> sol = {it.second,m[target-it.first]};
                    sort(sol.begin(),sol.end());
                    return sol;
                }
                else if (numbers[mid] < target - it.first)
                {
                    lo = mid + 1;
                }
                else 
                {
                    hi = mid - 1;
                }
            }
        }
    }
};
