/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int generateKey(int num1, int num2, int num3) 
    {
        string n1 = to_string(num1);
        string n2 = to_string(num2);
        string n3 = to_string(num3);
        while (n1.length() < 4)
        {
            reverse(n1.begin(), n1.end()); n1 += '0'; reverse(n1.begin(), n1.end());
        }
        while (n2.length() < 4)
        {
            reverse(n2.begin(), n2.end()); n2 += '0'; reverse(n2.begin(), n2.end());
        }
        while (n3.length() < 4)
        {
            reverse(n3.begin(), n3.end()); n3 += '0'; reverse(n3.begin(), n3.end());
        }
        string sol = "";
        for (int i = 0; i < 4; i++)
        {
            int n1i = n1[i] - '0';
            int n2i = n2[i] - '0';
            int n3i = n3[i] - '0';
            sol += to_string(min(min(n1i,n2i),n3i));
        }
        return stoi(sol);
    }
};
