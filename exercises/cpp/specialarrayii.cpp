/* SOLUTION 1 */
/* TIME LIMIT EXCEEDED ON CASE 523 of 536 */
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<bool> solution_vector;
        int num_queries = queries.size();
        for (int i = 0; i < num_queries; i++)
        {
            bool index_solution = true;
            int first_index = queries[i][0];
            int last_index = queries[i][1];
            vector<int> vec;
            for (int ii = first_index; ii <= last_index; ii++)
            {
                vec.push_back(nums[ii]);
            }
            for (int ii = 0; ii < vec.size()-1; ii++)
            {
                if (vec[ii]%2==vec[ii+1]%2)
                {
                    index_solution = false;
                }
            }
            solution_vector.push_back(index_solution);
        }    
        return solution_vector;
    }
};
