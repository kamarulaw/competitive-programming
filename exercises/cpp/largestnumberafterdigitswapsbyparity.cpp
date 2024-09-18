/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 148 of 238 */
class Solution {
public:
    string num_ = "";
    vector<int> permutations;

    void largestIntegerUtil(int i, string s)
    {
        if (i==s.length()-1)
        {
            permutations.push_back(stoi(s));
            return;
        }

        for (int j = i; j < s.length(); j++)
        {
            largestIntegerUtil(i+1,s);
            int siint = s[i] - '0';
            int sjint = s[j] - '0';
            if (siint%2 == sjint%2)
            {
                swap(s[i],s[j]);
                largestIntegerUtil(i+1,s);
            }
        }
    }
    
    int largestInteger(int num) 
    {
        num_ = to_string(num);
      
        largestIntegerUtil(0,num_);
      
        sort(permutations.begin(),permutations.end());
      
        return permutations[permutations.size()-1];
    }
};
