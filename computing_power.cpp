#include <iostream>
using namespace std;

//! Program to find the number(x) raised to the power of another number(n).

double naive(int x, int n)
{
  // outputs x**n
  int res = 1;
  // store the original number so that we can multiply the number by itself for n times
  for (int i = 1; i <= n; i++)
  {
    res = x * res;
  }
  return res;
}

// power(x,n)=power(x,n/2)*power(x,n/2)if n is even
//           = power(x,n-1)*x if n is odd = [power(x,(n-1)/2)*power(x,(n-1)/2)]*x
// now in the second case n is odd and n-1 is even
double efficient(int x, int n)
{
  if (n == 0)
  {
    return 1;
  }
  int temp = efficient(x, n / 2);
  temp = temp * temp;
  if (n % 2 == 0)
  {
    return temp;
  }
  return temp * x;
}
int main()
{
  cout << naive(2, 4);
  cout << endl;
  cout << efficient(2, 4);

  return 0;
}