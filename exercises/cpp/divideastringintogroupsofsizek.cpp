/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<string> divideString(string s, int k, char fill) 
    {
        int n = s.length();
        int counter = 0;
        string curr = "";
        vector<string> words;
        for (int i = 0; i < n; i++)
        {
            if (counter % k != 0)
            {
                curr += s[i];
                counter++;
            }
            else
            {
                words.push_back(curr);
                curr = s[i];
                counter = 1;
            }
        }
        while (counter % k)
        {
            counter++;
            curr += fill;
        }    
        words.push_back(curr);
        words.erase(words.begin()+0);
        return words;
    }
};
