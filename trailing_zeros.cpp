#include<iostream>
using namespace std;

// Program to find the number of trailing zeros in the factorial of a given number
// I/P - 5
// O/P - 1 (5!=120 , 120 has 1 trailing zero)
int iterative(int n){
        int res = 1;
        while(n>0){
            res *= n;
            n-=1;
        }
        return res;
        // This iterative solution takes theta(n) time and theta(1) auxiliary space
}
int naive_method(int n){
    int fact = iterative(n);
    int count =0;
    while(fact%10 == 0){
        count++;
        fact= fact/10;
    }
    return count;
}

int efficient_method(int n){
    int res = 0;
    for(int i=5;i<=n;i*=5){
        res += n/i;
    }
    return res;
}
int main(){
    cout << "The result through naive method: "<< naive_method(4)<< endl;
    cout << "The result through efficient method: "<< efficient_method(4)<< endl;
    return 0;
}