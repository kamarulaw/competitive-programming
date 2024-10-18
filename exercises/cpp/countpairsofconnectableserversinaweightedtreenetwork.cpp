/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    vector<int> countPairsOfConnectableServers(vector<vector<int>>& edges, int signalSpeed) 
    {
        int n = INT_MIN;
        for (int i = 0; i < edges.size(); i++)
        {
            n = max(n,max(edges[i][0],edges[i][1]));
        }
        n++;
        vector<bool> visited(n,false);
        vector<int> adjlist;   
        vector<vector<int>> graph(n,adjlist);
        for (int i = 0; i < edges.size(); i++)
        {
            graph[edges[0]].push_back(edges[1]);
            graph[edges[1]].push_back(edges[0]);   
        }
    }
};
