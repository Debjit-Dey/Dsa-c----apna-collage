// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missNum(vector<int> nums){
    int n = nums.size(),xor1=0, xor2=0;
    for(int i = 0; i < n; i++){
        xor1 = xor1 ^ i;
        xor2 = xor2 ^ nums[i];
    }
    xor1 = xor1 ^ n;

    return xor1 ^ xor2;
}

int main (){
    vector<int> a = {1, 2, 0, 4};
        // vector<int> a = {1};

    cout << missNum(a) << endl;
    
    return 0;
}