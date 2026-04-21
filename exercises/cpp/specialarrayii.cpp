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

/* SOLUTION 2 */
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
            for (int ii = first_index; ii < last_index; ii++)
            {
                if (nums[ii]%2==nums[ii+1]%2)
                {
                    index_solution = false;
                }
            }
            solution_vector.push_back(index_solution);
        }    
        return solution_vector;
    }
};

/* SOLUTION 3 */
/* WRONG ANSWER ON CASE 459 of 536 */
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<bool> solution_vector;
        int num_queries = queries.size();
        int n = nums.size();
        map<int,int> upperbounds;
        for (int i = 0; i < n-1; i++)
        {
            if (nums[i]%2==nums[i+1]%2)
            {
                upperbounds[i]++;
            }
        }
        for (int i = 0; i < num_queries; i++)
        {
            bool index_solution = true;
            int first_index = queries[i][0];
            int last_index = queries[i][1];
            for (int ii = first_index; ii <= last_index; ii++)
            {
                if (upperbounds[ii]>=1)
                {
                    index_solution = false;
                    break;
                }
            }
            solution_vector.push_back(index_solution);
        }    
        return solution_vector;
    }
};

/* SOLUTION 4 */
/* TIME LIMIT EXCEEDED ON CASE 535 of 536 */
class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& nums, vector<vector<int>>& queries) 
    {
        vector<bool> solution_vector;
        int num_queries = queries.size();
        int n = nums.size();
        map<int,int> upperbounds;
        for (int i = 0; i < n-1; i++)
        {
            if (nums[i]%2==nums[i+1]%2)
            {
                upperbounds[i]++;
            }
        }
        for (int i = 0; i < num_queries; i++)
        {
            bool index_solution = true;
            int first_index = queries[i][0];
            int last_index = queries[i][1];
            if (first_index == last_index)
            {
                solution_vector.push_back(true);
                continue;
            }
            for (int ii = first_index; ii <= last_index; ii++)
            {
                if (upperbounds[ii]>=1 && ii != last_index)
                {
                    index_solution = false;
                    break;
                }
            }
            solution_vector.push_back(index_solution);
        }    
        return solution_vector;
    }
};
