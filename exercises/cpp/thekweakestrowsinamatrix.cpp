/* SOLUTION 1 */ 
/* RUNTIME ERROR */
class Solution {
public:
  static bool comp(vector<int> a, vector<int> b) { 
    int n = a.size(); 
    int asold = 0; 
    int bsold = 0; 
    for (int i = 0; i < n-1; i++) { 
      asold += a[i];
      bsold += b[i];
    }
    return asold < bsold || a[n-1] < b[n-1];
  } 
  vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
    int m = mat.size(); 
    int n = mat[0].size(); 
    int start_twobased = 2; 
    
    for (int i = 0; i < mat.size(); i++) { 
      mat[i].push_back(start_twobased);
      start_twobased++;
    }     
    sort(mat.begin(), mat.end(), comp);
    
    vector<int> result;
    for (int i = 0; i < k; i++) { 
      result.push_back(mat[i][n] - 2);
    }
    return result; 
  }
};

/* SOLUTOIN 2 */ 
/* All tests passed */
class Solution {
public:
    static bool pqcmp(pair<vector<int>,int> p1, pair<vector<int>,int> p2)
    {
        int p1s = 0;
        int p2s = 0;

        for (int i = 0; i < p1.first.size(); i++)
        {
            if (p1.first[i] == 1)
            {
                p1s++;
            }
            if (p2.first[i] == 1)
            {
                p2s++; 
            }
        }

        if (p1s != p2s)
        {
            return p1s > p2s;
        }
        else
        {
            return p1.second > p2.second;
        }
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> result;

        priority_queue<pair<vector<int>,int>, vector<pair<vector<int>,int>>, bool(*)(pair<vector<int>,int>,pair<vector<int>,int>)> pq(pqcmp);
      
        for (int i = 0; i < mat.size(); i++)
        {
            pair<vector<int>,int> p;
            p.first = mat[i]; 
            p.second = i;

            pq.push(p);
        }
        while (k > 0)
        {
            result.push_back(pq.top().second); 
            pq.pop();
            k--;
        }
        return result;
    }
};
