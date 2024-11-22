/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        if (needle.length() > haystack.length())
        {
            return -1;
        }
        int sol = -1;
        int needlelen = needle.length();
        int haystacklen = haystack.length();
        for (int i = 0; i < haystacklen; i++)
        {
            bool allequal = true;
            int counter = 0;
            for (int j = 0; j < needlelen; j++)
            {
                if (i + j < haystacklen)
                {
                    if (needle[j] != haystack[i+j])
                    {
                        allequal = false; 
                        break;
                    }
                    else if (needle[j] == haystack[i+j])
                    {
                        counter++;
                    }
                }
            }
            if (allequal == true && counter == needlelen)
            {
                sol = i;
                break;
            }
        }    
        return sol;
    }
};
