/* SOLUTION 1 */
/* WRONG ANSWER ON CASE 47 of 75 */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; for (int i = 0; i < deck.size(); i++){m[deck[i]]++;} int gc = m[deck[0]]; if (gc == 1) {return false;} for (auto it: m){if (it.second != gc) {return false;}} return true;     
    }
};

/* SOLUTION 2 */
/* WRONG ANSWER ON CASE 59 of 75 */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; for (int i = 0; i < deck.size(); i++){m[deck[i]]++;} int gc = INT_MAX; for (auto it: m){gc = min(it.second,gc);} if (gc == 1) {return false;} for (auto it: m){if (it.second % 2 != 0) {return false;}} return true; 
    }
};

/* SOLUTION 3 */
/* WRONG ANSWER ON CASE 71 of 75 */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; for (int i = 0; i < deck.size(); i++){m[deck[i]]++;} int gc = INT_MAX; for (auto it: m){gc = min(it.second,gc);} if (gc == 1) {return false;} for (auto it: m){if (it.second % gc != 0) {cout << it.second << endl; return false;}} return true; 
    }
};

/* SOLUTION 4 */
/* psf */
class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) 
    {
        map<int,int> m; 
        for (int i = 0; i < deck.size(); i++)
        {
            m[deck[i]]++;
        } 

        int gc = INT_MAX; 

        for (auto it: m)
        {
            gc = min(it.second,gc);
        } 
        
        if (gc == 1) 
        {
            return false;
        } 

        map<int, vector<int>> count_pfs;

        for (int i = 2; i <= (int)pow(gc,.5); i++)
        {   
            if (gc % i == 0 && isprime(i))
            {
                gc_primefactorization.emplace(i);
            }
            else 
            {
                continue;
            }
        }

        vector<int> gc_pf(gc_primefactorization.begin(), gc_primefactorization.end());
        
        for (auto it: m)
        {
            if (it.second % gc != 0) 
            {
                return false;
            }
        }
        return true; 
    }

    bool isPrime(int n)
    {
        if (n < 2)
        {
            return false;
        }

        if (n == 2)
        {
            return true;
        }

        if (n % 2 == 0)
        {
            return false;
        }

        for (int i = 2; i <= (int)pow(n, .5); i++)
        {
            if (n % i == 0)
            {
                return false;
            } 
        }
        return true;
    }
};
