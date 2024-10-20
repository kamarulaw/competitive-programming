/* SOLUTION 1 */ 
/* WRONG ANSWER ON CASE 5 of 39 */
class Solution {
public:
    vector<int> dfs(int src_index, vector<vector<int>> graph, vector<bool> visited)
    {
        int n = visited.size();
        stack<pair<int,vector<int>>> s;
        vector<int> path = {src_index};
        pair<int,vector<int>> start;
        start.first = src_index;
        start.second = path;
        s.push(start);
        visited[src_index] = true;
        while (s.size() > 0)
        {
            pair<int,vector<int>> top = s.top();
            s.pop();
            int top_index = top.first;
            for (int i = 0; i < graph[top_index].size(); i++)
            {
                if (!visited[graph[top_index][i]])
                {
                    visited[graph[top_index][i]] = true;
                    pair<int,vector<int>> newtop;
                    newtop.first = graph[top_index][i];
                    newtop.second = top.second;
                    newtop.second.push_back(graph[top_index][i]);
                    s.push(newtop);
                    if (newtop.second.size() == n)
                    {
                        return newtop.second;
                    } 
                }
            }
        }
        return path; // never gets here based on problem formulation
    }

    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) 
    {
        int n = pairs.size();
        vector<int> v;
        vector<bool> visited(n,false);
        vector<vector<int>> graph(n,v);
        for (int i = 0; i < pairs.size(); i++)
        {
            vector<int> pair_i = pairs[i];
            for (int j = 0; j < pairs.size(); j++)
            {
                vector<int> pair_j = pairs[j]; 
                if (pair_i[0] != pair_j[0] and pair_i[1] != pair_j[1] && pair_i[1] == pair_j[0])
                {
                    graph[i].push_back(j);
                }
            }
        }
        /* 
        for (int i = 0; i < n; i++)
        {
            cout << "[" << pairs[i][0] << "," << pairs[i][1]<< "]: ";
            for (int j = 0; j < graph[i].size(); j++)
            {
                cout << "[" << pairs[graph[i][j]][0] << "," << pairs[graph[i][j]][1]<< "], ";
            }
            cout << endl;
        }
        */
        vector<vector<int>> result;
        for (int i = 0; i < pairs.size(); i++)
        {
            vector<int> indices = dfs(i,graph,visited); 
            if (indices.size() == n)
            {
                for (int i = 0; i < indices.size(); i++)
                {
                    result.push_back(pairs[indices[i]]);
                }
                break;
            }
        }
        return result;
    }
};

/* SOLUTION 2 */ 
/* WRONG ANSWER ON CASE 7 of 39 */
class Solution {
public:
    vector<int> dfs(int src_index, vector<vector<int>> graph, vector<bool> visited)
    {
        int n = visited.size();
        stack<pair<int,pair<vector<int>,vector<bool>>>> s;
        vector<int> path = {src_index};
        pair<int,pair<vector<int>,vector<bool>>> start;
        start.first = src_index;
        start.second.first = path;
        start.second.second = visited;
        s.push(start);
        visited[src_index] = true;
        while (s.size() > 0)
        {
            pair<int,pair<vector<int>,vector<bool>>> top = s.top();
            s.pop();
            int top_index = top.first;
            for (int i = 0; i < graph[top_index].size(); i++)
            {
                if (!top.second.second[graph[top_index][i]])
                {
                    vector<bool> newvisited = top.second.second;
                    newvisited[graph[top_index][i]] = true;

                    pair<int,pair<vector<int>,vector<bool>>> newtop;
                    newtop.first = graph[top_index][i];
                    newtop.second.second = newvisited;

                    vector<int> top_path = top.second.first;
                    top_path.push_back(graph[top_index][i]);
                    newtop.second.first = top_path;
                    s.push(newtop);


                    cout << newtop.second.first.size() << " | ";
                    for (int j = 0; j < newtop.second.first.size(); j++)
                    {
                        cout << newtop.second.first[j] << " "; 
                    }
                    cout << endl;
                    if (newtop.second.first.size() == n)
                    {
                        return newtop.second.first;
                    } 
                }
            }
        }
        return path; // never gets here based on problem formulation
    }

    vector<vector<int>> validArrangement(vector<vector<int>>& pairs) 
    {
        int n = pairs.size();
        vector<int> v;
        vector<bool> visited(n,false);
        vector<vector<int>> graph(n,v);
        for (int i = 0; i < pairs.size(); i++)
        {
            vector<int> pair_i = pairs[i];
            for (int j = 0; j < pairs.size(); j++)
            {
                vector<int> pair_j = pairs[j]; 
                if (pair_i[0] != pair_j[0] and pair_i[1] != pair_j[1] && pair_i[1] == pair_j[0])
                {
                    graph[i].push_back(j);
                }
            }
        }
        vector<vector<int>> result;
        for (int i = 0; i < pairs.size(); i++)
        {
            vector<int> indices = dfs(i,graph,visited); 
            if (indices.size() == n)
            {
                for (int i = 0; i < indices.size(); i++)
                {
                    result.push_back(pairs[indices[i]]);
                }
                break;
            }
        }
        return result;
    }
};
