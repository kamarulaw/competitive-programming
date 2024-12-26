/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    char kthCharacter(int k) 
    {
        string word = "a";
        while (word.length() < k)
        {
            string suffix = "";
            for (int i = 0; i < word.length(); i++)
            {
                if (word[i] != 'z')
                {
                    suffix += char((int)word[i] + 1);
                }
                else 
                {
                    suffix += 'a';
                }
            }        
            word += suffix;
        }    
        return word[k-1];
    }
};
