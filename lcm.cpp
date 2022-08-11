#include <iostream>
using namespace std;

//! Program to find the LCM of two numbers
// LCM is the smallest number which is divisible by both the given numbers
// If two numbers do not have any factors in common ( co-prime ) then their LCM is
// product of both the numbers.

int lcm_naive(int a, int b)
{
    int res = max(a, b);
    for (res; res > 0; res++)
    {
        if (res % a == 0 && res % b == 0)
        {
            break;
        }
    }
    return res;
    //* This algorithm takes O(a*b - max(a,b)) time
}

// a * b = gcd(a,b) * lcm(a,b)

int gcd_euclid(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd_euclid(b, a % b);
    }
}

int lcm_efficient(int a, int b)
{
    return (a * b) / gcd_euclid(a, b);
}

int main()
{
    cout << "The LCM of 4 and 6 is : " << lcm_naive(4, 6) << endl;
    cout << "The LCM of 4 and 6 is : " << lcm_efficient(4, 6) << endl;

    return 0;
}