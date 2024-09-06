class Solution {
public:
    string removeStars(string s) {
        string ans;
        vector<char> result;

        for (int i = 0; i < s.length(); i++)
        {
            result.push_back(s[i]);

            if (is_star(s[i]))
            {
                result.erase(result.begin() + i);
                result.erase(result.begin() + (i-1));
            }
        }

        for (int i = 0 ; i < result.size(); i++)
        {
            ans += result[i];
        }
        return ans;
    }

    bool is_star(char c)
    {
        return c=='*';
    }
};
