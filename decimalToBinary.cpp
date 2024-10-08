#include <iostream>
using namespace std;

int decimalToBinary(int n){
    int ans = 0 ; int power = 1;

    while(n>0){
        int rem = n % 2;
        n = n/2 ;

        ans += (rem *power);
        power *= 10;

    }
    return ans;
    }

int main (){

    cout << decimalToBinary(16);
    
    return 0;
}