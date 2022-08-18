#include <iostream>
#include <cmath>
using namespace std;

//! Program to print all the divisors of a number

void naive(int n)
{
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
    }
  }
  //* This algorithm takes O(n) time
  //* This algorithm takes O(1) auxiliary space
}

void efficient_unsorted(int n)
{
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
      if (i != (n / i))
      {
        cout << n / i << " ";
      }
    }
  }
  // This function does the print the numbers in sorted order
  //* This function takes O(sqrt(n)) time.
}

void efficient_sorted(int n)
{
  for (int i = 1; i * i < n; i++)
  {
    cout << i << " ";
  } // This for loop prints the divisors from 1(inclusive) to sqrt(n)(exclusive)
  for (int i = sqrt(n); i >= 1; i--)
  {
    cout << n / i << " ";
  } // This for loop prints the divisors from sqrt(n) (inclusive) to 1(exclusive)
  //* This algorithm also take theta(sqrt(n))+ theta(sqrt(n)) = theta(sqrt(n))
}
int main()
{
  naive(6);
  cout << endl;
  efficient_unsorted(6);
  cout << endl;
  efficient_sorted(6);
  return 0;
}