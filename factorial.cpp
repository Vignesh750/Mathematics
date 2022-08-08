#include<iostream>
using namespace std;

// Program to find the factorial of a number

int iterative(int n){
        int res = 1;
        while(n>0){
            res *= n;
            n-=1;
        }
        return res;
        // This iterative solution takes theta(n) time and theta(1) auxiliary space
}

int recursive(int n){
    if(n==0){
        return 1;
    }
    return n*recursive(n-1);
    // The time complexity recursive function => T(n) = T(n-1) + theta(1)
    // This recursive solution takes theta(n) time and theta(n) auxiliary space
}
int main(){
    cout << "Factorial of 5 using iterative method : "<< iterative(0) << endl;
    cout << "Factorial of 5 using recursive method : "<< recursive(0) << endl;
    return 0;
}
// The iterative solution is considered better.