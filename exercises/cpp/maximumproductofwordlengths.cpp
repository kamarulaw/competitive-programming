/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 119 of 168 */
class Solution {
public:
    int maxProduct(vector<string>& words) 
    {
        int sol = 0;
        int n = words.size();
        map<char,int> empty_map;
        vector<map<char,int>> vm(n,empty_map);
        for (int i = 0; i < n; i++)
        {
            string word = words[i];
            for (int j = 0; j < word.length(); j++)
            {
                vm[i][word[j]]++;
            }
        } 
        /*   
        for (int i = 0; i < words.size(); i++)
        {
            cout << words[i] << " | ";
            for (auto it : vm[i])
            {
                cout << it.first << " " << it.second << " || ";
            }
            cout << endl;
        } 
        */
        for (int i = 0; i < n-1; i++)
        {
            map<char,int> map_i = vm[i];
            for (int j = i+1; j < n; j++)
            { 
                bool sharedletters = false;
                map<char,int> map_j = vm[j];
                for (auto it : map_i)
                {
                    if (map_j[it.first] > 0 && it.second > 0)
                    {
                        sharedletters = true;
                        break;
                    }
                }
                for (auto it : map_j)
                {
                    if (map_i[it.first] > 0 && it.second > 0)
                    {
                        sharedletters = true;
                        break;
                    }
                }
                if (sharedletters == false)
                {
                    if (words[i].length() * words[j].length() > sol)
                    {
                        sol = words[i].length() * words[j].length();
                    }

                }
            }
        }
        return sol;
    }
};
