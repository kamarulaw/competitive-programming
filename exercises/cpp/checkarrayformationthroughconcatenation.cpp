/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) 
    {
        for (int i = 0; i < pieces.size(); i++)
        {
            if (pieces[i].size() > 0)
            {
                int first = pieces[i][0];
                int first_index_arr = 0;
                while (first_index_arr < arr.size())
                {
                    if (arr[first_index_arr] == first)
                    {
                        break;
                    }
                    first_index_arr++;
                }
                int ind = 0;
                int counter = 0;
                while (first_index_arr < arr.size() && ind < pieces[i].size())
                {
                    if (arr[first_index_arr] != pieces[i][ind])
                    {
                        return false;
                    }
                    ind++;
                    counter++;
                    first_index_arr++;
                }
                if (counter != pieces[i].size())
                {
                    return false;
                }
            }
        }    
        return true;
    }
};
