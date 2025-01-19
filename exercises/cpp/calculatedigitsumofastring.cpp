/* SOLUTION 1 */ 
/* psf */
class Solution {
public:
    string digitSum(string s, int k) 
    {
        while (s.length() > k)
        {
            int counter = 0; 
            string num = "";
            string news  = "";
            for (int i = 0; i < s.length(); i++)
            {
                if (counter % k != 0)
                {
                    counter++;
                    num += s[i];
                }
                if (counter % k == 0)
                {
                    counter = 0;
                    int sod = 0;
                    int num_;
                    if (num.length() == 1)
                    {
                        num_ = num - '0';
                    }
                    else 
                    {
                        num_ = stoi(num);
                    }
                    int num_ = stoi(num); 
                    while (num_ > 0)
                    {
                        sod += (num_ % 10);
                        num_ /= 10;
                    }
                    news += to_string(sod);
                }
            }
            if (num.length() >= 1)
            {
                counter = 0;
                int sod = 0;
                int num_ = stoi(num);
                while (num_ > 0)
                {
                    sod += (num_ % 10);
                    num_ /= 10;
                }
                news += to_string(sod);
            }
            s = news;   
        }
        return s;    
    }
};

/* SOLUTION 2 */
/* psf */
class Solution {
public:
    string digitSum(string s, int k) 
    {
        while (s.length() > k)
        {
            int ind = 0;
            string curr = "";
            vector<string> groups;
            while (ind < s.length())
            {
                
                if (curr.length() < k)
                {
                    curr += s[ind];
                }
                if (curr.length() == k || ind == s.length()-1)
                {
                    groups.push_back(curr); curr = "";
                }
                ind++;
            }
            for (int i = 0; i < groups.size(); i++)
            {
                cout << groups[i] << " ";
            }
            cout << endl;
            string news = "";
            for (int i = 0; i < groups.size(); i++)
            {
                int sum = 0;
                string num = groups[i];
                for (int j = 0; j < num.length(); j++)
                {
                    sum += num[i] - '0';
                }
                if (news.length() == 0)
                {
                    news = to_string(sum);
                }
                else 
                {
                    news += to_string(sum);
                }
                
            }
            s = news;
        }  
        return s;   
    }
};
