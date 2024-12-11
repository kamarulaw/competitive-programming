/* SOLUTION 1 */
/* psf */
class Solution {
public:
    string validIPAddress(string queryIP) 
    {
        string ipv4 = "IPv4";
        string ipv6 = "IPv6";
        string neither = "Neither";
        string sol;
        vector<string> comps;
        bool containsdot = false;
        bool containscolon = false;
        if (queryIP[0] == '.' || queryIP[0] == ':' || queryIP[queryIP.length()-1] == '.' || queryIP[queryIP.length()-1] == ':')
        {
            return neither;
        }
        for (int i = 0; i < queryIP.length(); i++)
        {
            if (queryIP[i] == '.')
            {
                containsdot = true;
            }
            if (queryIP[i] == ':')
            {
                containscolon = true;
            }
        }
        if ((containsdot == true && containscolon == true) || (containsdot == false && containscolon == false))
        {
            return neither;
        }
        else if (containsdot == false && containscolon == true)
        {
            string curr = "";
            for (int i = 0; i < queryIP.length(); i++)
            {
                if (queryIP[i] == ':')
                {
                    if (curr.size() > 4 || curr.size() < 1)
                    {
                        sol = neither;
                    }
                    for (int i = 0; i < curr.size(); i++)
                    {
                        if (!(((int)'a' <= curr[i] && curr[i] <= (int)'f') || ((int)'A' <= curr[i] && queryIP[i] <= (int)'f') || (0 <= queryIP[i] - '0' && queryIP[i] - '0' <= 9)))
                        {
                            sol = neither;
                        }
                    }
                    curr = "";
                    if (sol != neither)
                    {
                        comps.push_back(curr);
                    }
                }
                else 
                {
                    curr += queryIP[i];
                }
            }
            if (curr.size() > 4)
            {
                sol = neither;
            }
            for (int i = 0; i < curr.size(); i++)
            {
                if (!(((int)'a' <= curr[i] && curr[i] <= (int)'f') || ((int)'A' <= curr[i] && queryIP[i] <= (int)'f') || (0 <= queryIP[i] - '0' && queryIP[i] - '0' <= 9)))
                {
                    sol = neither;
                }
            }
            if (sol != neither)
            {
                comps.push_back(curr);
            }
            if (sol != neither && comps.size() == 8)
            {
                sol = ipv6;
            }
        }
        else 
        {
            string curr = "";
            for (int i = 0; i < queryIP.length(); i++)
            {
                if (queryIP[i] == '.')
                {
                    if ((curr.length() < 1) || (curr[0] == '0') || !((0 <= stoi(curr) && stoi(curr) <= 255)))
                    {
                        sol = neither;
                    }
                    curr = "";
                    comps.push_back(curr);
                }
                else
                {
                    if (0 <= queryIP[i] - '0' && queryIP[i] - '0' <= 9)
                    {
                        curr += queryIP[i];
                    }
                    else 
                    {
                        sol = neither; 
                    }
                }
            }
            if ((curr.length() < 1) || (curr[0] == '0') || !((0 <= stoi(curr) && stoi(curr) <= 255)))
            {
                sol = neither;
            }
            else
            {
                comps.push_back(curr);
                if (comps.size() == 8)
                {
                    sol = ipv4;
                }
                cout << comps.size() << endl;
            }
        } 
        return sol;         
    }
};
