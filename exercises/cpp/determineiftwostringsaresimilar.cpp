class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length() != word2.length())
        {
            return false;
        }

        map<char,int> m1;
        map<char,int> m2; 

        for (int i = 0; i < word1.length(); i++)
        {
            m1[word1[i]]++;
        }

        for (int i = 0; i < word2.length(); i++)
        {
            m2[word2[i]]++; 
        }

        vector<int> word1freqs;
        vector<int> word2freqs;
        
        for (auto it: m1)
        {
            if (m2[it.first] <= 0)
            {
                return false;
            }

            word1freqs.push_back(it.second);
        }

        for (auto it: m2)
        {
            if (m1[it.first] <= 0)
            {
                return false;
            }
            word2freqs.push_back(it.second);
        }

        sort(word1freqs.begin(), word1freqs.end()); 
        sort(word2freqs.begin(), word2freqs.end());

        for (int i = 0; i < word1freqs.size(); i++)
        {
            if (word1freqs[i] != word2freqs[i])
            {
                return false;
            }
        }

        return true; 
    }
};
