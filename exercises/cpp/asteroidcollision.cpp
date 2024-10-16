/* SOLUTION 1 */ 
/* Incomplete */
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> result;
        
        result.push_back(asteroids[0]); 

        for (int i = 1; i < asteroids.size(); i++)
        {
            if (result[i-1] < 0 && asteroids[i] > 0) {
                if (result[i-1] * -1 < asteroids[i])
                {
                    result.erase(result.begin() + (i-1)); 
                    result.push_back(asteroids[i]);
                }

                if (result[i-1] * -1 == asteroids[i])
                {
                    result.erase(result.begin() + (i-1));
                }

            } else if (result[i-1] > 0 && asteroids[i] < 0) {
                if (result[i-1] < asteroids[i] * -1)
                {
                    result.erase(result.begin() + (i-1)); 
                    result.push_back(asteroids[i]);
                }

                if (result[i-1] == asteroids[i] * -1)
                {
                    result.erase(result.begin() + (i-1));
                }

            } else {
                result.push_back(asteroids[i]);
            }
        }
        return result;
    }
};

/* SOLUTION 2 */ 
/* Incomplete */ 
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> result;

        result.push(asteroids[0]);
        
        for (int i = 1; i < asteroids.size(); i++) 
        {
            if (asteroids[i] < 0) 
            {
                while (result.size() > 0 && result.top() > 0) 
                {
                    if (abs(asteroids[i]) >= result.top())
                    {
                        result.pop();
                    } 
                }
                result.push(asteroids[i]);
            }
        }

        vector<int> vresult;
        while (result.size() > 0)
        {
            vresult.push_back(result.top()); 
            result.pop();
        }

        for (int i = 0; i < vresult.size()/2; i++)
        {
            int tmp = vresult[i]; 
            vresult[i] = vresult[vresult.size()-1-i]; 
            vresult[vresult.size()-1-i] = tmp;
        }
        return vresult;
    }
};

/* SOLUTION 3 */ 
/* All tests passed */
class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) 
    {
        vector<int> ans;
        vector<int> newans;

        for (int i = 0; i < asteroids.size(); i++)
        {
            ans.push_back(asteroids[i]);
        }    

        while (inds(ans)[0] != -1)
        {
            vector<int> elems = inds(ans);
            cout << elems.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                if (elems.size() > 1)
                {
                    if (i != elems[0] && i != elems[1])
                    {
                        newans.push_back(ans[i]);
                    }
                }
                else
                {
                    if (i != elems[0])
                    {
                        newans.push_back(ans[i]);
                    }
                }
            }
            ans = newans;
            newans.clear();
        }
        return ans;
    }

    vector<int> inds(vector<int> vec)
    {
        vector<int> res;
        int n = vec.size();
        for (int i = 0; i < n-1; i++)
        {
            if (vec[i] > 0 && vec[i+1] < 0)
            {
                if (abs(vec[i]) > abs(vec[i+1]))
                {
                    res.push_back(i+1);
                }
                else if (abs(vec[i]) < abs(vec[i+1]))
                {
                    res.push_back(i);
                }
                else
                {
                    res.push_back(i);
                    res.push_back(i+1);
                }
                return res;
            }
        }
        res.push_back(-1);
        return res;
    }
};
