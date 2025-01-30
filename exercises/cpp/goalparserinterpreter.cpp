/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    string interpret(string command) 
    {
        int ind = 0;
        string sol = "";
        int n = command.length();
        while (ind < n)
        {
            if (command[ind] == 'G')
            {
                sol += 'G'; ind++;
            }
            else if (command[ind] == '(')
            {
                if (command[ind+1] == ')')
                {
                    sol += 'o'; ind+=2;
                }
                else
                {
                    sol += "al"; ind+=4;
                }
            }
        }
        return sol;
    }
};
