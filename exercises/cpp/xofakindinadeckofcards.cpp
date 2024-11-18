/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 47 of 75 */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; for (int i = 0; i < deck.size(); i++){m[deck[i]]++;} int gc = m[deck[0]]; if (gc == 1) {return false;} for (auto it: m){if (it.second != gc) {return false;}} return true;     
    }
};

/* SOLUTION 2 */
/* WRONG ANSWER ON CASE 59 of 75 */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; for (int i = 0; i < deck.size(); i++){m[deck[i]]++;} int gc = INT_MAX; for (auto it: m){gc = min(it.second,gc);} if (gc == 1) {return false;} for (auto it: m){if (it.second % 2 != 0) {return false;}} return true; 
    }
};
