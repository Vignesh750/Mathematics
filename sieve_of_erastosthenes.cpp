#include <iostream>
#include <vector>
#include <string>
using namespace std;

//! Program to find all the prime numbers less than or equal to a given number.

bool isPrime(int n)
{
  if (n == 1)
  {
    return false;
  }
  if (n == 2 || n == 3)
  {
    return true;
  }
  if (n % 2 == 0 || n % 3 == 0)
  {
    return false;
  }
  for (int i = 5; i * i <= n; i = i + 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      return false;
    }
  }
  return true;
}

void naive(int n)
{
  for (int i = 2; i <= n; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
  //* This algorithm takes O(n*sqrt(n))
}

void efficient(int n)
{
  vector<bool> isPrimearr(n + 1, true);
  for (int i = 2; i * i <= n; i++)
  {
    if (isPrimearr[i])
    {
      for (int j = i * i; j <= n; j = j + i)
      {
        isPrimearr[j] = false;
      }
    }
  }
  for (int i = 2; i <= n; i++)
  {
    if (isPrimearr[i])
    {
      cout << i << " ";
    }
  }
}

int main()
{
  naive(17);
  cout << endl;
  efficient(17);

  return 0;
}