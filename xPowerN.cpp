#include <iostream>
#include <vector>
using namespace std;

double xPowerN(double x, int n){
    long binForm = n;
    double ans =1;
    if(n <0){
        x = 1/x;
        binForm = -binForm;
    }
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;

    }
    return ans;
}

int main (){

    cout << xPowerN(2,-3);
    
    return 0;
}