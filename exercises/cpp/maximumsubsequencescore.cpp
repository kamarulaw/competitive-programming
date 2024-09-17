/* SOLUTION 1 */ 
/* BRUTE FORCE INDEX COMBINATION GENERATION*/
/* MEMORY LIMIT EXCEEDED on CASE 12 of 28 */
class Solution {
public:
    long long k_; 
    long long n_;
    vector<int> indices;
    vector<vector<int>> indexsubsequences;

    void generateindexsubsequences(int i, vector<int> container)
    {
        if (i == n_ || container.size() == k_)
        {
            if (container.size() == k_)
            {
                indexsubsequences.push_back(container);
                return;
            }
            else 
            {
                return;
            }
            
        }
        generateindexsubsequences(i+1, container);
        container.push_back(indices[i]);
        generateindexsubsequences(i+1, container);
    }

    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        k_ = k;
        n_ = nums1.size();

        long long maxscore = LLONG_MIN;
        long long currnums1sum = 0; 
        long long currnums2min = LLONG_MAX;

        for (int i = 0; i < n_; i++)
        {
            indices.push_back(i);
        }

        vector<int> arr;
        generateindexsubsequences(0, arr);

        for (int i = 0; i < indexsubsequences.size(); i++)
        {
            arr = indexsubsequences[i]; 
            for (int j = 0; j < k; j++)
            {
                currnums1sum += nums1[arr[j]]; 
                currnums2min = min(currnums2min, (long long) nums2[arr[j]]);
            }
            maxscore = max(maxscore, currnums1sum*currnums2min); 
            currnums1sum = 0; 
            currnums2min = LLONG_MAX;
        }
        return maxscore; 
    }
};

/* SOLUTION 2 */ 
/* BRUTE FORCE INDEX COMBINATION GENERATION*/
/* MEMORY LIMIT EXCEEDED on CASE 12 of 28 w/out saving index subsets*/
class Solution {
public:
    long long k_; 
    long long n_;
    vector<int> nums1_; 
    vector<int> nums2_;
    vector<int> indices;

    long long maxscore = LLONG_MIN;
    long long currnums1sum = 0; 
    long long currnums2min = LLONG_MAX;

    void maxscoreutil(int i, vector<int> indexsubsequence)
    {
        if (i == n_ || indexsubsequence.size() == k_)
        {
            if (indexsubsequence.size() == k_)
            {
                for (int j = 0; j < k_; j++)
                {
                    currnums1sum += nums1_[indexsubsequence[j]]; 
                    currnums2min = min(currnums2min, (long long) nums2_[indexsubsequence[j]]);
                }
                maxscore = max(maxscore, currnums1sum*currnums2min); 
                currnums1sum = 0; 
                currnums2min = LLONG_MAX;
                return;
            }
            else 
            {
                return;
            }
            
        }
        maxscoreutil(i+1, indexsubsequence);
        indexsubsequence.push_back(indices[i]);
        maxscoreutil(i+1, indexsubsequence);
    }

    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) 
    {
        k_ = k;
        n_ = nums1.size();
        nums1_ = nums1;
        nums2_ = nums2;

        for (int i = 0; i < n_; i++)
        {
            indices.push_back(i);
        }

        vector<int> arr;
        maxscoreutil(0, arr);        
        return maxscore; 
    }
};
