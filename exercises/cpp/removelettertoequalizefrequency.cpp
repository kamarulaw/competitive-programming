/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 48 of 50 */
class Solution {
public:
    bool equalFrequency(string word) 
    {
        int oc = 0;
        map<int,int> m;
        for (int i = 0; i < word.length(); i++)
        {
            m[word[i]]++;
        }
        vector<int> ahh;
        for (auto it : m)
        {
            if (it.second >= 1)
            {
                ahh.push_back(it.second);
            }
            if (it.second == 1)
            {
                oc++;
            }
        }    
        sort(ahh.begin(), ahh.end()); 
        if (ahh[0] == 1 && ahh[ahh.size()-1] == 1)
        {
            return true;
        }
        set<int> sahh;
        for (int i = 0; i < ahh.size(); i++)
        {
            sahh.emplace(ahh[i]);
        }
        if (sahh.size() == 2 && oc == 1)
        {
            return true;
        }
        if (sahh.size() != 2)
        {
            return false;
        }
        sort(ahh.begin(), ahh.end()); ahh[ahh.size()-1] = ahh[ahh.size()-1] - 1; sahh.clear();
        for (int i = 0; i < ahh.size(); i++)
        {
            sahh.emplace(ahh[i]);
        }
        sort(ahh.begin(), ahh.end());
        for (int i = 0; i < ahh.size(); i++)
        {
            cout << ahh[i] << " ";
        }
        cout << endl; 
        return sahh.size() == 1;
    }
};
