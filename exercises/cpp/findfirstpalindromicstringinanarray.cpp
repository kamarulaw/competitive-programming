/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string firstPalindrome(vector<string>& words) 
    {
        for (int i = 0; i < words.size(); i++)
        {
            string word = words[i];
            int wordlen = word.length();
            bool palindromic = true;
            for (int index = 0; index < wordlen/2; index++)
            {
                if (word[index] != word[wordlen-index-1])
                {
                    palindromic = false;
                    continue;
                }
            }
            if (palindromic == true)
            {
                return word;
            }
        }
        return "";    
    }
};
