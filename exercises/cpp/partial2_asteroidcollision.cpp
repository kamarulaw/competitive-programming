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
