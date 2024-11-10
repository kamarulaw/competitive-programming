/* SOLUTION 1 */ 
/* All tests passed */
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) 
    {
        int fblen = flowerbed.size();
        int index = 0;
        if (fblen == 1)
        {
            return flowerbed[0] == 0 || n == 0;
        }
        while (index < fblen)
        {
            if (n == 0)
            {
                return true;
            }
            if (index - 1 >= 0 && index + 1 < fblen && flowerbed[index-1] == 0 && flowerbed[index+1] == 0 && flowerbed[index] == 0)
            {
                n--;
                flowerbed[index] = 1;
            }
            if (index == 0)
            {
                if (index + 1 < fblen && flowerbed[index+1] == 0 && flowerbed[index] == 0)
                {
                    n--;
                    flowerbed[index] = 1;
                }
            }
            if (index == fblen-1)
            {
                if (index - 1 >= 0 && flowerbed[index-1] == 0 && flowerbed[index] == 0)
                {
                    n--;
                    flowerbed[index] = 1;
                }
            }
            index++;
        }
        return n==0;    
    }
};
