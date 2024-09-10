SOLUTION1: VECTOR+MAP
/*TIME LIMIT EXCEEDED on CASE 47 of 48 */
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        map<int, int> m;
        vector<int> result;
        for (int i = 0; i < temperatures.size(); i++)
        {
            int counter = 0;
            bool greater_temp_found = false; 
            for (int j = i+1; j < temperatures.size(); j++)
            {
                counter++;
                if (temperatures[j] > temperatures[i])
                {
                    greater_temp_found = true; 
                    break;
                }
            }

            if (greater_temp_found == true)
            {
                m[i] = counter;
            }
            else 
            {
                m[i] = 0;
            }
        }

        for (int i = 0; i < temperatures.size(); i++)
        {
            result.push_back(m[i]);
        }
        return result;
    }
};

SOLUTION2: VECTOR+STACK
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st; 
        
        vector<int> result; 
        for (int i = 0; i < temperatures.size(); i++)
        {
            result.push_back(0);
        }

        for (int i = temperatures.size()-1; i >= 0; i--)
        {
            while (st.size() > 0 && temperatures[i] >= temperatures[st.top()])
            {
                st.pop();
            }

            if (st.size() > 0)
            {
                result[i] = st.top() - i;
            }

            st.push(i);
        }
        return result;
    }
};    
