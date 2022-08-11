#include <iostream>
#include <cmath>
using namespace std;

//! Program to find if a given number is prime or not

// 2 is the only even prime number
// 1 is neither a prime number nor a composite number

bool naive(int n)
{
	if (n == 1)
	{
		return false;
	}
	for (int i = 2; i < n; i++)
	{

		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
	//* This method takes O(n) in the worst case
}

bool efficient(int n)
{
	if (n == 1)
	{
		return false;
	}
	for (int i = 2; i < sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool more_efficient(int n)
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
	for (int i = 5, i <= sqrt(n); i += 6)
	{
		if (n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
		return true;
	}
}
// Idea behind the more_efficient
//* first we check if n==1 then return false because 1 is not a prime number
//* then we check if n== 2 or n==3 then return true because 2 and 3 are prime numbers
//* then we check if n is divisible by 2 or 3 then we return false , this if condition
//* can be used to reduce the number of iterations
//* we need to check the divisibility of n by the numbers 2,3,4,5,6,7,,,sqrt(n)
//* we have already checked for 2 and 3 this means we have checked for 4,6,8,10,,,2n
//* we have also checked for 3,6,9,12,15,18,,,3n
//* now we need to check the divisibility of n by 5,7,11,13,17,19,i,i+2,i+6.so we run the for loop

int main()
{
	cout << "The given number is prime : " << naive(2) << endl;
	cout << "The given number is prime : " << efficient(3) << endl;
	cout << "The given number is prime : " << more_efficient(7) << end;
	return 0;
	//* The naive method takes O(n) time
	//* The efficient method takes O(sqrt(n))
	//* The more_efficient method is almost three times efficient than the efficient method
}