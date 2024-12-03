/* SOLUTION 1 */
/* All tests passed */
class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) 
    {
        int num1;
        int num2; 
        int target;
        string num1_ = "";
        string num2_ = "";
        string target_ = "";
        for (int i = 0; i < firstWord.length(); i++)
        {
            num1_ += char((firstWord[i] - 'a') + (int)'0');   
        }   
        num1 = stoi(num1_);
        for (int i = 0; i < secondWord.length(); i++)
        {
            num2_ += char((secondWord[i] - 'a') + (int)'0'); 
        } 
        num2 = stoi(num2_); 
        for (int i = 0; i < targetWord.length(); i++)
        {
            target_ += char((targetWord[i] - 'a') + (int)'0'); 
        }
        target = stoi(target_);
        return target == num1 + num2; 
    }
};
