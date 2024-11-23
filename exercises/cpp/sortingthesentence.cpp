/* SOLUTION 1 */
/* psf */
class Solution {
public:
    string sortSentence(string s) 
    {
        string word = "";
        string result = "";
        vector<string> words;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else 
            {
                word += s[i];
            }
        }
        words.push_back(word);
        int n = words.size();
        vector<string> arr(n,"");
        for (int i = 0; i < n; i++)
        {
            string num = stoi(words[i][words[i].length()-1]);
            int num_ = stoi(num);
            cout << num_ " " << endl;
            arr[num_-1] = words[i].substr(0,words[i].length()-1);
        }
        for (int i = 0; i < n; i++)
        {
            if (i != n-1)
            {
                result += arr[i]; result += " "; 
            }
            else 
            {
                result += arr[i];
            }
        } 
        return result;
    }
};
