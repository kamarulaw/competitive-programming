/* SOLUTION 1 */
/* All tests passed */

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();

        stack<int> st;
        vector<bool> visited;

        for (int i = 0; i < n; i++)
        {
            visited.push_back(false);
        }

        st.push(0);
        visited[0] = true;

        while (st.size() > 0)
        {
            int top = st.top();

            st.pop();

            for (int i = 0; i < rooms[top].size(); i++)
            {
                if (visited[rooms[top][i]] == false)
                {
                    st.push(rooms[top][i]);
                    visited[rooms[top][i]] = true;
                }
            }
        }

        for (int i = 0; i < visited.size(); i++)
        {
            if (visited[i] == false)
            {
                return false;
            }
        }
        return true;
    }
};
