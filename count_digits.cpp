#include<iostream>
#include<cmath>
using namespace std;


// To find the number of digits in a given number
// Three methods can be used to find the number of digits in a number
// Iterative method
// Recursive method 
// Logarithmic method
<<<<<<< HEAD
//The  logarithmic method is a one liner
// The iterative method takes theta(n) time to run
=======
// The  logarithmic method is a one liner
// The iterative method runs in theta(n) time.
>>>>>>> 4ad7c3b60cf6cfa5b3fe72eb376a3d304a9297db
int iterative(int n){
    int count=0;
    while(n!=0){
        count++;
        n= n/10;
    }
    return count;
}
int recursive(int n){
    if(n==0){
        return 0;
    }
    return 1+recursive(n/10);
}
int logarithmic(int n){
    return floor(log10(n)+1);
}
int main(){
    cout << "iterative method "<< iterative(123) << endl;
    cout << "recursive method "<< recursive(123) << endl;
    cout << "logarithmic method "<< logarithmic(123) << endl;
    return 0;
}
