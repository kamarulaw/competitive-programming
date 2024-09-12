/* SOLUTION 1 8> 
/* WRONG ANSWER ON CASE 5 of 114 */
class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int provinces;
        int provincenum = 1;

        stack<int> st;
        vector<int> visited;
        vector<int> nodeprovincenums;

        for (int i = 0; i < isConnected.size(); i++)
        {
            visited.push_back(false);
            nodeprovincenums.push_back(-1);
        }

        st.push(0);
        visited[0] = true;
        nodeprovincenums[0] = provincenum;

        while (st.size() > 0)
        {
            int top = st.top(); 

            st.pop();

            for (int i = 0; i < isConnected[top].size(); i++)
            {
                if (isConnected[top][i] == 1 && visited[isConnected[top][i]] == false)
                {
                    visited[isConnected[top][i]] = true;
                    st.push(i); 
                }

                if (isConnected[top][i] == 1 && nodeprovincenums[top] > 0 )
                {
                    nodeprovincenums[i] = nodeprovincenums[top];
                } 

                if (isConnected[top][i] == 1 && nodeprovincenums[top] < 0) 
                {
                    nodeprovincenums[i] = provincenum;
                    provincenum++;
                }
            } 
        }
      
        int islands = 0;
        int provmax = -1;
        for (int i = 0; i < nodeprovincenums.size(); i++)
        {
            cout << nodeprovincenums[i] << " \n";
            if (nodeprovincenums[i] == -1)
            {
                islands++;
            }
            provmax = max(provmax, nodeprovincenums[i]);
        }
        return islands + provmax;
    }
};
