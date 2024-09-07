/* potential Fix: change some of the for loops to while loops*/

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
