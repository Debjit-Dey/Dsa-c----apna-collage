#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0; int power = 1;

    while (n>0){
        int rem = n %10;
        n /= 10;

        ans += (rem * power);
        power *=2; 
    }
}

int main (){

    cout << binaryToDecimal(1000);
    
    return 0;
}