/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int minimumSum(int num) 
    {
        string num_ = to_string(num);
        vector<char> num__ = {num_[0],num_[1],num_[2],num_[3]};
        vector<int> sums;
        // [0,1,2,3] 
        // 01 -> 23 
        // 02 -> 13
        // 03 -> 12
        string num1 = "";
        string num2 = "";
        // 01 | 23
        num1 += num__[0];
        num1 += num__[1];
        num2 += num__[2];
        num2 += num__[3];
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        reverse(num1.begin(), num1.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        num1 = "";
        num2 = "";
        num1 += num__[0];
        num1 += num__[2];
        num2 += num__[1];
        num2 += num__[3];
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        reverse(num1.begin(), num1.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        num1 = "";
        num2 = "";
        num1 += num__[0];
        num1 += num__[3];
        num2 += num__[1];
        num2 += num__[2];
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        reverse(num1.begin(), num1.end());
        sums.push_back(stoi(num1) + stoi(num2));
        reverse(num2.begin(), num2.end());
        sums.push_back(stoi(num1) + stoi(num2));
        sort(sums.begin(), sums.end());
        return sums[0];

    }
};
