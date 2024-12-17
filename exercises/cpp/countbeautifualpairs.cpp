/* SOLUTION 1 */
/* psf */
class Solution {
public:
    bool isprime(int n)
    {
        if (n == 2)
        {
            return true;
        }
        if (n < 2 || n % 2 == 0)
        {
            return false;
        }
        for (int i = 2; i <= (int)pow(n,.5)+1; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }

    int countBeautifulPairs(vector<int>& nums) 
    {
        int sol = 0;
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            string ni = to_string(nums[i]); reverse(ni.begin(), ni.end()); 
            int dni = stoi(ni) % 10;
            vector<int> dniv; dniv.push_back(1);
            for (int num = 2; num <= (int)pow(nums[i],.5)+1; num++)
            {
                while (isprime(num) && dni%num == 0)
                {
                    if (dniv[dniv.size()-1] != num)
                    {
                        dniv.push_back(num);
                        dni /= 10;
                    }
                }   
            }
            for (int j = i+1; j < nums.size(); j++)
            {
                int dnj = nums[j] % 10;
                vector<int> dnjv; dnjv.push_back(1);
                for (int num = 2; num <= (int)pow(nums[j],.5)+1; num++)
                {
                    while (isprime(num) && dnj % num == 0)
                    {
                        if (dnjv[dnjv.size()-1] != num)
                        {
                            dnjv.push_back(num);
                            dnj /= 10;
                        }
                    }
                } 
                bool flag = true;
                for (int ii = 0; ii < dniv.size(); ii++)
                {
                    for (int jj = 0; jj < dnjv.size(); jj++)
                    {
                        if (jj != 0 && dnjv[jj] == dniv[ii])
                        {
                            flag = false;
                        }
                    }
                }
                if (flag == true)
                {
                    sol++;
                }
            }
        }
        return sol;
    }
};
