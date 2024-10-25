// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missNum(vector<int> nums){
    int n = nums.size(),sum1=0, sum2=0;
    sum1 = n* (n+1)/2;
    for(int i =0; i< n; i++){
        sum2 += nums[i];
    }
    return sum1 - sum2;
   

}

int main (){
    // vector<int> a = {1, 2, 4, 5};
        vector<int> a = {1};

    cout << missNum(a) << endl;
    
    return 0;
}