// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missNum(vector<int> nums){
    int n = nums.size(),index =0,i;
    sort(nums.begin(), nums.end());
    if (nums[0] == 1) return 0;
    for (i=0; i<n-1; i++){
        if((nums[i]+1)!= nums[i+1]){
            index=i;
            break;
        }
    }
    return (nums[i] +1);

}

int main (){
    vector<int> a = {0, 2, 4, 5};
        // vector<int> a = {1};

    cout << missNum(a) << endl;
    
    return 0;
}