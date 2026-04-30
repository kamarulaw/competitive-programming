/* SOLUTION 1 */
/* psf */
class Solution {
public:

    string generateTag(string caption) 
    {
        vector<string> words; 
        int index = 0;
        int n = caption.length();
        string currword = "";    
        while (index < n)
        {
            if (caption[index] != ' ')
            {
                currword.push_back(caption[index]);
            }
            else
            {
                if (currword.length() > 0)
                {
                    words.push_back(currword);
                    currword = "";
                }
            }
            index++;
        }
        if (currword.length() > 0)
        {
            words.push_back(currword);
        }
        for (int i = 0; i < words.size(); i++)
        {
            cout << words[i] << endl;
        }   
        cout << (int)'a' << " " << (int)'A';
        return "";
    }
};
