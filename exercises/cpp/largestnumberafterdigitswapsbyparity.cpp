/* SOLUTION 1 */ 
/* TIME LIMIT EXCEEDED ON CASE 148 of 238 */
class Solution {
public:
    string num_ = "";
    vector<int> permutations;

    void largestIntegerUtil(int i, string s)
    {
        if (i==s.length()-1)
        {
            permutations.push_back(stoi(s));
            return;
        }

        for (int j = i; j < s.length(); j++)
        {
            largestIntegerUtil(i+1,s);
            int siint = s[i] - '0';
            int sjint = s[j] - '0';
            if (siint%2 == sjint%2)
            {
                swap(s[i],s[j]);
                largestIntegerUtil(i+1,s);
            }
        }
    }
    
    int largestInteger(int num) 
    {
        num_ = to_string(num);
      
        largestIntegerUtil(0,num_);
      
        sort(permutations.begin(),permutations.end());
      
        return permutations[permutations.size()-1];
    }
};

/* SOLUTION 2 */ 
/* pretests passed */
/* RUNTIME ERROR on CASE 2 of 238 */
class Solution {
public:
    vector<int> oddindices;
    vector<int> evenindices;
    set<vector<int>> oddindexperms;
    set<vector<int>> evenindexperms;
    void largestIntegerUtil(int i, vector<int> source_vector, bool oddflag)
    {
        if (i==source_vector.size()-1)
        {
            if (oddflag == false)
            {
                evenindexperms.emplace(source_vector);
            }
            else 
            {
                oddindexperms.emplace(source_vector);
            }
            return;
        }
        for (int j = i; j < source_vector.size(); j++)
        {
            largestIntegerUtil(i+1,source_vector,oddflag);
            swap(source_vector[i],source_vector[j]);
            largestIntegerUtil(i+1,source_vector,oddflag);
        }
    }
    
    int largestInteger(int num) 
    {
        string num_ = to_string(num);
        map<int,int> index_digit_map;
        vector<int> candidates;

        for (int i = 0; i < num_.length(); i++)
        {
            int chartoint = num_[i] - '0';
            index_digit_map[i] = chartoint;         
            if (chartoint%2 == 0)
            {
                evenindices.push_back(i);
            }  
            else 
            {
                oddindices.push_back(i);
            }
        }

        vector<int> arr;
        largestIntegerUtil(0,evenindices,false);
        largestIntegerUtil(0,oddindices,true);

        vector<vector<int>> oddindexpermsv(oddindexperms.begin(),oddindexperms.end());
        vector<vector<int>> evenindexpermsv(evenindexperms.begin(),evenindexperms.end());

        for (int i = 0; i < oddindexpermsv.size(); i++)
        {  
            for (int j = 0; j < evenindexperms.size(); j++)
            {
                vector<int> oip = oddindexpermsv[i];
                vector<int> eip = evenindexpermsv[j];
                int k_ = 0;
                string numasstring = "";
                for (int k = 0; k < num_.length(); k++)
                {
                    if (index_digit_map[k_]%2 == 0)   
                    {
                        numasstring += to_string(index_digit_map[eip[0]]);
                        eip.erase(eip.begin());
                    }
                    else 
                    {
                        numasstring += to_string(index_digit_map[oip[0]]); 
                        oip.erase(oip.begin());
                    }
                    k_++;
                }
                candidates.push_back(stoi(numasstring));
            }
        }
        sort(candidates.begin(),candidates.end());
        return candidates[candidates.size()-1];
    }
};
/* SOLUTION 3 */ 
/* progres so far */
class Solution {
public:
    vector<int> oddindices;
    vector<int> evenindices;
    set<vector<int>> oddindexperms;
    set<vector<int>> evenindexperms;
    void largestIntegerUtil(int i, vector<int> source_vector, bool oddflag)
    {
        if (i==source_vector.size()-1)
        {
            if (oddflag == false)
            {
                evenindexperms.emplace(source_vector);
            }
            else 
            {
                oddindexperms.emplace(source_vector);
            }
            return;
        }
        for (int j = i; j < source_vector.size(); j++)
        {
            largestIntegerUtil(i+1,source_vector,oddflag);
            swap(source_vector[i],source_vector[j]);
            largestIntegerUtil(i+1,source_vector,oddflag);
        }
    }
    
    int largestInteger(int num) 
    {
        string num_ = to_string(num);
        map<int,int> index_digit_map;
        vector<int> candidates;

        for (int i = 0; i < num_.length(); i++)
        {
            int chartoint = num_[i] - '0';
            index_digit_map[i] = chartoint;         
            if (chartoint%2 == 0)
            {
                evenindices.push_back(i);
            }  
            else 
            {
                oddindices.push_back(i);
            }
        }

        vector<int> arr;
        largestIntegerUtil(0,evenindices,false);
        largestIntegerUtil(0,oddindices,true);

        vector<vector<int>> oddindexpermsv(oddindexperms.begin(),oddindexperms.end());
        vector<vector<int>> evenindexpermsv(evenindexperms.begin(),evenindexperms.end());

        if (oddindices.size() > 0 && evenindices.size() > 0)
        {
            for (int i = 0; i < oddindexpermsv.size(); i++)
            {  
                for (int j = 0; j < evenindexperms.size(); j++)
                {
                    vector<int> oip = oddindexpermsv[i];
                    vector<int> eip = evenindexpermsv[j];
                    int k_ = 0;
                    string numasstring = "";
                    for (int k = 0; k < num_.length(); k++)
                    {
                        if (index_digit_map[k_]%2 == 0)   
                        {
                            numasstring += to_string(index_digit_map[eip[0]]);
                            eip.erase(eip.begin());
                        }
                        else 
                        {
                            numasstring += to_string(index_digit_map[oip[0]]); 
                            oip.erase(oip.begin());
                        }
                        k_++;
                    }
                        candidates.push_back(stoi(numasstring));
                }
            }
        }
        else if (oddindicies.size() > 0 || evenindicies.size() > 0)
        {
            vector<vector<int>> ips;
            if (oddindicies.size() > 0)
            {
                ips = oddindexpermsv;
            }
            else 
            {
                ips = evenindexpermsv;
            }
            for (int i = 0; i < ips.size(); i++)
            {
                vector<int> ip = ips[i];
                for (int k = 0; k < nums_.length(); k++)
                {
                    numasstring += to_string(no theres no love, she dont even like me)
                }
            }
        }
        sort(candidates.begin(),candidates.end());
        return candidates[candidates.size()-1];
    }
};
