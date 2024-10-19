class Solution {
public:
    vector<int> result;
    
    void initializeResult(int n)
    {
        for (int i = 0; i < n; i++)
        {
            result.push_back(0);
        }
        return;
    }

    void traversal(int src, int dst, vector<vector<int>> graph, vector<bool> vis, map<string,int> wm, int n, string path)
    {
        vis[src] = true;
        if (src == dst)
        {
            path += " ";
            path += to_string(dst);
            cout << path << endl;
            return;
        }
        for (int i = 0; i < graph[src].size(); i++)
        {
            path += " ";
            path += to_string(graph[src][i]);
            traversal(graph[src][i],dst,graph,vis,wm,n,path);
        }
    }

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
        map<string,int> weightmap;
        vector<vector<int>> graph(n,adjlist);
        for (int i = 0; i < edges.size(); i++)
        {
            string e0e1 = ""; 
            e0e1 += to_string(edges[i][0]); e0e1 += " "; e0e1 += to_string(edges[i][1]);
            string e1e0 = "";
            e1e0 += to_string(edges[i][1]); e1e0 += " "; e1e0 += to_string(edges[i][0]);
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);   
            
        }
        initializeResult(n);
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                traversal(i,j,graph,visited,weightmap,n,to_string(i));
            }
        }
        return result;
    }
};
