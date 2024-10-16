// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

#include <iostream>
#include <vector>
using namespace std;

int unique(vector<int> nums){
    int n= nums.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = nums[i] ^ ans;
    }
    return ans;
}

int main (){
     vector<int> nums = {3,3,7,7,10,11,11};
    cout << unique(nums);

    
    return 0;
}