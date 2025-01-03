/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) 
    {
        char c1 = coordinate1[0];
        int _c1 = coordinate1[1] - '0';
        char c2 = coordinate2[0];
        int _c2 = coordinate2[1] - '0';
        int letterdiffc1 = c1 - 'a';
        int numberdiffc1a1 = _c1 - 1;
        string curr = "";
        string c1col;
        string c2col;
        int letterdiffc2 = c2 - 'a';
        int numberdiffc2a1 = _c2 - 1;
        if ((letterdiffc1 + numberdiffc1a1) % 2 == 0)
        {
            c1col = "black";
        }
        else
        {
            c1col = "white";
        }
        if ((letterdiffc2 + numberdiffc2a1) % 2 == 0)
        {
            c2col = "black";
        }
        else
        {
            c2col = "white";
        }
        return c1col.compare(c2col) == 0;
    }
};
