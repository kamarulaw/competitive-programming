/* SOLUTION 1 */
/* RUNTIME ERROR ON CASE 769 of 895 */
class Solution {
public:
    string getSmallestString(string s) 
    {
        vector<int> nums;
        int n = s.length();
        nums.push_back(stoi(s));
        for (int i = 0; i < n-1; i++)
        {
            nums.push_back(stoi(s));
            int curr = s[i] - '0';
            int next = s[i+1] - '0';
            if (curr%2 == next%2)
            {
                char tmp = s[i];
                s[i] = s[i+1]; 
                s[i+1] = tmp;
                nums.push_back(stoi(s));
                tmp = s[i];
                s[i] = s[i+1]; 
                s[i+1] = tmp;
            }
        }
        sort(nums.begin(),nums.end());
        string answer = to_string(nums[0]);
        bool reversed = false;
        while (answer.length() < s.length())
        {
            if (reversed == false)
            {
                reverse(answer.begin(),answer.end()); 
                reversed = true;
            }
            answer.push_back('0');
        }
        if (reversed == true)
        {
            reverse(answer.begin(),answer.end());
        }
        return answer;    
    }
};

/* SOLUTION 2 */
/* RUNTIME ERROR ON CASE 783 of 895 */
class Solution {
public:
    string getSmallestString(string s) 
    {
        vector<unsigned long long int> nums;
        int n = s.length();
        nums.push_back(stoull(s));
        cout << stoull(s) << endl;
        for (int i = 0; i < n-1; i++)
        {
            nums.push_back(stoull(s));
            int curr = s[i] - '0';
            int next = s[i+1] - '0';
            if (curr%2 == next%2)
            {
                char tmp = s[i];
                s[i] = s[i+1]; 
                s[i+1] = tmp;
                nums.push_back(stoll(s));
                tmp = s[i];
                s[i] = s[i+1]; 
                s[i+1] = tmp;
            }
        }
        sort(nums.begin(),nums.end());
        string answer = to_string(nums[0]);
        bool reversed = false;
        while (answer.length() < s.length())
        {
            if (reversed == false)
            {
                reverse(answer.begin(),answer.end()); 
                reversed = true;
            }
            answer.push_back('0');
        }
        if (reversed == true)
        {
            reverse(answer.begin(),answer.end());
        }
        return answer;    
    }
};
