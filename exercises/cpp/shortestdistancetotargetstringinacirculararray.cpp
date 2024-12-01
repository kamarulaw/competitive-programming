/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) 
    {
        vector<int> relevantinds;
        for (int i = 0; i < words.size(); i++)
        {
            if (target.compare(words[i]) == 0)
            {
                relevantinds.push_back(i);
            }
        }
        if (relevantinds.size() == 0)
        {
            return -1;
        }
        vector<int> distances;
        for (int i = 0; i < relevantinds.size(); i++)
        {
            distances.push_back(abs(relevantinds[i] - startIndex));
            int otherdistance = 0;
            int sindex = startIndex;
            while (sindex != relevantinds[i])
            {
                sindex--;
                otherdistance++;
                if (sindex == -1)
                {
                    sindex = words.size()-1;
                }
            }
            distances.push_back(otherdistance);
            otherdistance = 0;
            sindex = startIndex;
            while (sindex != relevantinds[i])
            {
                sindex++;
                otherdistance++;
                if (sindex == words.size())
                {
                    sindex = 0;
                }
            }
            distances.push_back(otherdistance);
        }
        sort(distances.begin(), distances.end());
        return distances[0];
    }
};
