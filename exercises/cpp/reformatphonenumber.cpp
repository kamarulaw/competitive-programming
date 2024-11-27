/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string reformatNumber(string number) 
    {
        vector<char> digits;
        for (int i = 0; i < number.size(); i++)
        {
            if ((int)'0' <= (int)number[i] && (int)number[i] <= (int)'9')
            {
                digits.push_back(number[i]);
            }
        }
        string ans = "";
        int ind = 0;
        int ds = digits.size();
        int threesubs;
        int threerem;
        if (ds < 3)
        {
            for (int i = 0; i < ds; i++)
            {
                ans += digits[i];
            }
            return ans;
        }
        if (ds == 4)
        {
            for (int i = 0; i < 2; i++)
            {
                ans += digits[i];
            }
            ans += '-';
            for (int i = 2; i < 4; i++)
            {
                ans += digits[i];
            }
            return ans;
        }
        if ((ds - 2) % 3 == 0)
        {
            threerem = 2;
        }
        else if ((ds - 3) % 3 == 0)
        {
            threerem = 3;
        }
        else 
        {
            threerem = 4;
        }
        threesubs = (ds-threerem) / 3;
        for (int i = 0; i < threesubs; i++)
        {
            int counter = 0;
            while (counter < 3)
            {
                ans += digits[ind]; ind++; counter++;
            }
            if (i != threesubs-1)
            {
                ans += '-';
            }
        }
        if (threerem == 2)
        {
            ans += '-'; ans += digits[ind]; ind++; ans += digits[ind];
        }
        else if (threerem == 3)
        {
            ans += '-'; ans += digits[ind]; ind++; ans += digits[ind]; ind++; ans += digits[ind];
        }
        else
        {
            ans += '-'; ans += digits[ind]; ind++; ans += digits[ind]; ind++; ans += '-'; ans += digits[ind]; ind++; ans += digits[ind];
        }
        return ans;
    }
};
