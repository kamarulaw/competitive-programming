/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 4 of 49 */
class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int ind = 0;
        map<string,int> m;
        string curr = "";
        while (ind < paragraph.length())
        {
            if (paragraph[ind] == ' ' || paragraph[ind] == '.' || paragraph[ind] == '!' || paragraph[ind] == '?' || paragraph[ind] == '\'' || paragraph[ind] == ',' || paragraph[ind] == ';')
            {

                m[curr]++; 
                curr = "";
            }
            else 
            {
                curr += tolower(paragraph[ind]);
            }
            ind++;
        }

        map<string,int> bannedmap;
        for (int i = 0; i < banned.size(); i++)
        {
            bannedmap[banned[i]]++;
        }

        string maxword = "";
        int numoccurrences_maxword = INT_MIN;
        for (auto it: m)
        {
            if (it.second > numoccurrences_maxword && bannedmap[it.first] == 0)
            {
                maxword = it.first;
                numoccurrences_maxword = it.second;
            }
        }
        return maxword;
        
    }
};
