/* SOLUTION 1 */
/* All tests passed */

// *Paraphrased* That was a lottery call. You're not usually one I'd pledge one like this too, but anyone can be a winner here
// https://leetcode.com/problems/vowel-consonant-score/description/?envType=problem-list-v2&envId=simulation (pretty sure this question came out this year...nothing against questions that are too easy to get in the rhythm but ill hold out on this one)
class Solution {
public:
    vector<int> rep(long long n)
    {
        vector<int> result;
        while (n > 0)
        {
            if (n%10 != 0)
            {
                result.push_back(n%10);
            }
            n/=10;
        }
        return result;
    }

    long long removeZeros(long long n) 
    {
        long long result = 0;
        vector<int> rep_ = rep(n);
        for (int i = 0; i < rep_.size(); i++)
        {
            result += ((rep_[i])*pow(10,i));
        }
        return result;
    }
};
