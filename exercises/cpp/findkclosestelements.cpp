/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int,int> p2)
    {
        if (p1.second != p2.second)
        {
            return p1.second <= p2.second;
        }
        return p1.first < p2.first;
    }

    vector<int> findClosestElements(vector<int>& arr, int k, int x) 
    {
        vector<pair<int,int>> v;
        for (int i = 0; i < arr.size(); i++)
        {
            pair<int,int> p;
            p.first = arr[i]; 
            p.second = abs(arr[i]-x);
            v.push_back(p);
        }
        sort(v.begin(), v.end(), comp);
        vector<pair<int,int>> tupleresult(v.begin(), v.begin()+k);
        vector<int> result;
        for (int i = 0; i < tupleresult.size(); i++)
        {
            result.push_back(tupleresult[i].first);
        }
        sort(result.begin(), result.end());
        return result;        
    }
};
