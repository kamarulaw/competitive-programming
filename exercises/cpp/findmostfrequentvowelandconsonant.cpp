/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    int maxFreqSum(string s) 
    {
        int n = s.length();
        map<char,int> vowel_map;
        map<char,int> consonant_map;
        // for (int i = 0; i++; i < n)
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << " ";
            if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
            {
                vowel_map[s[i]]++;
                cout << "vowel" << endl;
            }
            else 
            {
                consonant_map[s[i]]++;
                cout << "consonant" << endl;
            }
        }
        cout << n << " " << vowel_map.size() << " " << consonant_map.size();
        int vowel_max = 0;
        int consonant_max = 0;
        for (auto it : vowel_map)
        {
            vowel_max = max(vowel_max,it.second);
            cout << it.first << " " << it.second;
        }
        for (auto it : consonant_map)
        {
            consonant_max = max(consonant_max,it.second);
            cout << it.first << " " << it.second;
        }
        return vowel_max + consonant_max;
    }
};
