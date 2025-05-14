/* SOLUTION 1 */
/* All tests passed */ 

#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a_ = (int)'a'; 
    int z_ = (int)'z';
    map<int,vector<string>> m;
    for (int i = a_; i <= z_; i++)
    {
        for (int j = a_; j<= z_; j++)
        {
            for (int k = a_; k <= z_; k++)
            {
                
                int sum = i+j+k-a_-a_-a_+3;
                char st_ = char(i);
                char mi_ = char(j);
                char en_ = char(k);
                string s_;
                s_.push_back(st_);
                s_.push_back(mi_);
                s_.push_back(en_);
                m[sum].push_back(s_);
            }
        }
    }
    for (auto it : m)
    {
        sort(it.second.begin(),it.second.end());
    }
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        cout << m[n][0] << endl;
        
    }
    return 0;
}
