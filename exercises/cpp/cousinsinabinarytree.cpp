/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    map<int,vector<string>> m;

    void traversal(TreeNode* root, int depth, int parentval)
    {
        if (root == NULL)
        {
            return;
        } 

        string res = "";
        res += to_string(root->val);
        res += " ";
        res += to_string(parentval);
        m[depth].push_back(res);

        traversal(root->left, depth+1, root->val); 
        traversal(root->right, depth+1, root->val);
    }

    bool isCousins(TreeNode* root, int x, int y) 
    {    
        traversal(root,0,INT_MIN);
        vector<int> depths; 
        vector<int> parents;
        for (auto elem : m)
        {
            int depth = elem.first;
            vector<string> vpstrings = elem.second;
            for (int i = 0; i < vpstrings.size(); i++)
            {
                char space_ = ' '; 
                int slen = vpstrings[i].length();
                int spind = INT_MIN;
                for (int j = 0; j < slen; j++)
                {
                    if (space_ == vpstrings[i][j])
                    {
                        spind = j; 
                        break;
                    }
                }
                int val = stoi(vpstrings[i].substr(0,spind+1));
                int parentval = stoi(vpstrings[i].substr(spind+1,slen-spind));

                if (val == x || val == y)
                {
                    depths.push_back(depth);
                    parents.push_back(parentval);
                }
            }
        }

        if (depths[0] == depths[1] && parents[0] != parents[1])
        {
            return true;
        }

        return false; 
    }
};
