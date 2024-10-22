/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 4 of 56 */
class Solution {
public:
    vector<int> relevant_prices;

    void dfs(int src, int dst, vector<vector<int>> g, map<string,int> m, vector<bool> visited, int n, int k)
    {
        visited[src] = true;
        pair<vector<int>,vector<bool>> start;
        start.first = {}; 
        start.first.push_back(src);
        start.first.push_back(-1);
        start.first.push_back(0);
        start.second = visited;
        stack<pair<vector<int>,vector<bool>>> stack_;
        stack_.push(start);
        while (stack_.size() > 0)
        {
            int node = stack_.top().first[0]; 
            int stops = stack_.top().first[1]; 
            int price = stack_.top().first[2];
            cout << node << " " << stops << " " << price << endl;
            vector<bool> vis = stack_.top().second;
            stack_.pop();
            for (int i = 0; i < g[node].size(); i++)
            {
                string m_str = to_string(node);
                m_str += " ";
                if (!vis[g[node][i]])
                {
                    m_str += to_string(g[node][i]);
                    pair<vector<int>,vector<bool>> newtop;
                    newtop.first = {};
                    newtop.first.push_back(g[node][i]);
                    newtop.first.push_back(stops + 1);
                    newtop.first.push_back(price + m[m_str]);
                    newtop.second = vis;
                    stack_.push(newtop);
                    if (stops + 1 <= k && g[node][i] == dst)
                    {
                        relevant_prices.push_back(price + m[m_str]);
                    }
                }
            }
        }
        return;
    }

    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) 
    {
        vector<int> v;
        map<string,int> m;
        vector<vector<int>> g(n,v);
        vector<bool> visited(n,false);   
        for (int i = 0; i < flights.size(); i++)
        {
            string src_dst_str = to_string(flights[i][0]);
            src_dst_str += " "; 
            src_dst_str += to_string(flights[i][1]);
            g[flights[i][0]].push_back(flights[i][1]);
            m[src_dst_str] = flights[i][2];
        }
        dfs(src, dst, g, m, visited, n, k);
        if (relevant_prices.size() > 0)
        {
            sort(relevant_prices.begin(),relevant_prices.end());
            return relevant_prices[0];
        }
        return -1;
    }
};
