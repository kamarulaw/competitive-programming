/* SOLUTION 1 */
/* MEMORY LIMIT EXCEEDED ON CASE 1217 of 1252 */
class Solution {
public:
    vector<string> strings;

    void generate(int i, int k, string moves, vector<int> blanks) 
    {
        if (i == k)
        {
            strings.push_back(moves);
            return;
        }
        int blank_index = blanks[i];
        moves[blank_index] = 'L';
        generate(i+1,k,moves,blanks);
        moves[blank_index] = 'R';
        generate(i+1,k,moves,blanks);
    }

    int furthestDistanceFromOrigin(string moves) 
    {
        int n = moves.length();
        vector<int> blanks;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == '_')
            {
                blanks.push_back(i);
            }
        }
        int k = blanks.size();
        int max_dfo = INT_MIN; 
        generate(0,k,moves,blanks);
        for (int i = 0; i < strings.size(); i++)
        {
            int dfo = 0;
            for (int j = 0; j < strings[i].length(); j++)
            {
                if (strings[i][j] == 'L')
                {
                    dfo--;
                }
                else 
                {
                    dfo++;
                }
            }
            max_dfo = max(max_dfo, abs(dfo));
        }
        return max_dfo;
    }
};

/* SOLUTION 2 */
/* All tests passed */
class Solution {
public:
    int furthestDistanceFromOrigin(string moves) 
    {
        int n = moves.length();
        int ldfo = 0;
        int rdfo = 0;
        for (int i = 0; i < n; i++)
        {
            if (moves[i] == 'L' || moves[i] == '_')
            {
                ldfo--;
            }
            else
            {
                ldfo++;
            }
            
            if (moves[i] == 'R' || moves[i] == '_')
            {
                rdfo++;
            }
            else
            {
                rdfo--;
            }
        }
        return max(abs(rdfo),abs(ldfo));
    }
};
