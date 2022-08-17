#include <iostream>
#include <cmath>
using namespace std;

//! Program to print the prime factors of a given number n.

isPrime(int n)
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
  for (int i = 5; i < sqrt(n); i = i + 6)
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
  for (int i = 2; i < n; i++)
  {
    if (isPrime(i))
    {
      int x = i;
      while (n % x == 0)
      {
        cout << i << " ";
        x = x * i;
      }
    }
  }
  //* The for loop has O(n) time complexity
  //* the isPrime function also takes O(n) time
  //* the while loop takes O(log n) time because it is multiplied by x to reach n.
  //* the total time complexity is O(n^2logn)
}

void efficient(int n)
{
  //? The given number can be written as product of powers of prime factors.
  //? The prime factors can range from 2 to sqrt(n).
  int i = 2;
  while (n != 1)
  {
    while (n % i == 0)
    {
      cout << i << " ";
      n = n / i;
    }
    i++;
  }
}

int main()
{
  int n;
  cout << "Enter the number to print the prime factors : ";
  cin >> n;
  cout << "The naive method " << endl;
  naive(n);
  cout << endl;
  cout << "The efficient method " << endl;
  efficient(n);

  return 0;
}