/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 64 of 81 */
class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) 
    {
        int n = graph.size();
        vector<int> v;
        vector<vector<int>> g(n,v);
        for (int i = 0; i < graph.size(); i++)
        {
            for (int j = 0; j < graph[i].size(); j++)
            {
                g[i].push_back(graph[i][j]);
                g[graph[i][j]].push_back(i);
            }
        }
        vector<bool> visited(n,false);
        pair<int,int> start;
        start.first = 0; start.second = 0;
        queue<pair<int,int>> q; q.push(start);
        visited[0] = true;
        int zerosize = 1; 
        int onesize = 0;
        while (q.size() > 0)
        {
            pair<int,int> front = q.front(); q.pop();
            int node = front.first; int color = front.second;
            for (int i = 0; i < g[node].size(); i++)
            {
                if (!visited[g[node][i]])
                {
                    visited[g[node][i]] = true;
                    pair<int,int> newfront;
                    newfront.first = g[node][i];
                    if (color == 0)
                    {
                        onesize++;
                        newfront.second = 1;
                    }
                    else 
                    {
                        zerosize++;
                        newfront.second = 0; 
                    }
                    q.push(newfront);
                }
            }
        }
        cout << zerosize << " " << onesize << endl;
        return onesize == zerosize;
    }
};
