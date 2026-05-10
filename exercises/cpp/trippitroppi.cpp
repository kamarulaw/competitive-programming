/* SOLUTION 1 */
/* not tested */

#include <string>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s_;
        cin >> s_;
        int s_len = s_.length();
        vector<string> words;
        string c_ = "";
        int index = 0;
        while (index < s_len)
        {
            if (s_[index] != ' ')
            {
                c_.push_back(s_[index]);
            }
            else 
            {
                words.push_back(c_);
                c_ = "";
            }
            index++;
        }
        words.push_back(c_);
        string tth_result = "";
        for (int j = 0; j < words.size(); j++)
        {
            tth_result.push_back(words[j][0]);
        }
        cout << tth_result << endl;
    }
    return 0;
}
