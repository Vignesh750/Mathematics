#include <iostream>
using namespace std;

int efficient(int x, int n)
{
  int res = 1;
  while (n != 0)
  {
    if (n % 2 != 0)
    {
      res = res * x;
    }
    else
    {
    }
    n = n / 2;
    x = x * x;
  }
  return res;
}
int main()
{
  cout << efficient(3, 19);
  return 0;
}