/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) 
    {
        int ind = 0;
        int incby = 1;
        vector<int> sol(num_people,0);
        while (candies > 0)
        {
            if (incby <= candies)
            {
                sol[ind] += incby;
                candies -= incby;
                ind++; 
                ind %= num_people;
                incby++; 
            }
            else 
            {
                sol[ind] += candies;
                candies = 0;
                ind++;
                ind %= num_people;
            }
        }    
        return sol;
    }
};
