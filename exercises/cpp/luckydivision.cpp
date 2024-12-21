/* SOLUTION 1 */
/* All tests passed */
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> lucky_numbers;

void generate(int i, int n, string s)
{
  if (s.length() == n)
  {
    return;
  }
  s += '4';
  lucky_numbers.push_back(s);
  generate(i+1,n,s);
  
  s = s.substr(0,s.length()-1);
  
  s.push_back('7');
  lucky_numbers.push_back(s);
  generate(i+1,n,s);
}

int length(int n)
{
  int len = 0;
  while (n > 0)
  {
    len++; n /= 10;
  }
  return len;
}

int main()
{
  int n;
  cin >> n;
  int length_n = length(n);
  generate(0,length_n,"");
  for (int i = 0; i < lucky_numbers.size(); i++)
  {
    if (n % stoi(lucky_numbers[i]) == 0)
    {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";
  return 0;
}
