#include<iostream>
using namespace std;
int main(){
    int n,sum;
    cout << "Enter the number to check : ";
    cin >> n;
    while(n/10){
        sum++;
    }
    cout << "The number of digits is" << sum << endl;
    return 0;
}