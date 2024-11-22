/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 15 of 44 */
class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        string word = "";
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
        map<char,string> f;
        map<string,char> finv;
        
        for (int i = 0; i < pattern.length(); i++)
        {
        
            
            f[pattern[i]] = words[i];
            finv[words[i]] = pattern[i];
        }
        for (int i = 0; i < pattern.length(); i++)
        {
            if (f[pattern[i]] != words[i])
            {
                return false;
            }
        }
        /*
        map<char,int> mp;
        map<string,int> ms;
        for (int i = 0; i < words.size(); i++)
        {
            ms[words[i]]++;
        }  
        for (int i = 0; i < pattern.length(); i++)
        {
            mp[pattern[i]]++;
        }  
        if (ms.size() != mp.size())
        {
            return false;
        }
        vector<int> mpvalvec; 
        vector<int> msvalvec;
        for (auto it: mp)
        {
            mpvalvec.push_back(it.second);
        }
        for (auto it: ms) 
        {
            msvalvec.push_back(it.second);
        }
        sort(mpvalvec.begin(), mpvalvec.end()); 
        sort(msvalvec.begin(), msvalvec.end());
        for (int i = 0; i < mpvalvec.size(); i++)
        {
            if (mpvalvec[i] != msvalvec[i])
            {
                return false;
            }
        }
        for (int i = 0; i < pattern.length(); i++)
        {
            if (mp[pattern[i]] != ms[words[i]])
            {
                return false;
            }
        }
        */
        return true;
    }
};
