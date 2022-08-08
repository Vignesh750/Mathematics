#include<iostream>
using namespace std;


// To find if a given number is a palindrome or not
// A single digit number is always a palindrome number
// 1) find the reverse of a number and check if it is equal to the original number
// 2) To find the reverse of the number traverse the number from right to left (i.e)
//    from last to first digit
//    The last digit is found by using the modulo operator
//    Add this to a rev variable and remove the last digit from the number n by doing n/10.

bool is_palindrome(int n){
    int original = n;
    int rev = 0;
    while(n>0){
    rev = rev*10 +(n%10);
    n = n/10;
    }
    return (rev==original);

}
// The time complexity of this number is theta(d) where d is the number of digits in the number n
int main(){
    cout << is_palindrome(9);
    return 0;
}