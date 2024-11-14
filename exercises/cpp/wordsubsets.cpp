/* SOLUTION 1 */
/* psf */
class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<string> result;
        vector<map<char,int>> vm;
        for (int i = 0; i < words1.size(); i++)
        {
            map<char,int> m;
            for (int j = 0; j < words1[i].length(); j++)
            {
                m[words1[i][j]]++;
            }
            vm.push_back(m);
        }
        for (int i = 0; i < words2.size(); i++)
        {
            bool universal = true;
            map<char,int> m;
            for (int j = 0; j < words2[i].length(); j++)
            {
                m[words2[i][j]]++;
            }
            for (int j = 0; j < vm.size(); j++)
            {
                map<char,int> vm_ = vm[j];
                for (auto it: m)
                {
                    if (m[it.first] != vm_[it.first])
                    {
                        universal = false;
                        break;
                    }
                }
            }
            if (universal == true)
            {
                result.push_back(words2[i]);
            }
        }
        return result;
    }
};
