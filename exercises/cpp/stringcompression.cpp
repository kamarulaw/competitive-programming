/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 50 of 76 */
class Solution {
public:
    int compress(vector<char>& chars) {
        char indx = 0; 
        char curr = 1;
        string result = ""; 
        int ccount = 0;

        int n = chars.size();

        while (indx < n)
        {
            int len = 1;
            while (indx < n && curr < n && chars[indx] == chars[curr])
            {
                curr++;
                len++; 
            }

            result += chars[indx];
            if (len > 1)
            {
                for (int i = 0; i < to_string(len).length(); i++)
                {
                    result += to_string(len)[i];
                }
            }

            len = 1;
            indx = curr; 
            curr = indx + 1;
        }

        chars.clear();

        for (int i = 0; i < result.length(); i++)
        {
            chars.push_back(result[i]);
        }

        return result.size();
    }
};
