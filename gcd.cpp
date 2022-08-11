#include <iostream>
using namespace std;

//! Program to find the GCD of two numbers
// GCD of two number cannot be greater than the least(minimum) of two numbers.
// So we initialize the result to be min(n,m)

// Euclid's algorithm for gcd of two numbers
// GCD(a,b) =| b if b divides a;
//          | GCD(b,a%b) otherwise

int naive(int n, int m)
{
    int res = min(m, n);
    for (res; res > 0; res = res - 1)
    {
        if (n % res == 0 && m % res == 0)
        {
            break;
        }
    }
    //* This method takes O(min(n,m)) time.sa
    return res;
}
int euclid(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    return euclid(b, a % b);
}

int main()
{
    cout << "The GCD of 10 and 3 is : " << naive(10, 3) << endl;
    cout << "The GCD of 4 and 6 is : " << euclid(4, 6) << endl;
    return 0;
}