/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) 
    {
        int ans1 = 0;
        int ans2 = 0;
        int n = distance.size();
        vector<bool> visited(n,false); 
        int ind = start; 
        while (ind != destination)
        {
            ans1 += distance[ind];
            visited[ind] = true;
            ind += 1;
            ind %= n;
        }
        for (int i = 0; i < n; i++)
        {
            if (!(visited[i]))
            {
                ans2 += distance[i];
            }
        }
        return min(ans1,ans2);
    }
};
