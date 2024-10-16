// You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

// Return the single element that appears only once.

// Your solution must run in O(log n) time and O(1) space.

#include <iostream>
#include <vector>
using namespace std;

int unique(vector<int> nums){
    int n = nums.size();
    if(n==1) return nums[0];
    for(int i=0; i<n; i++){
        int ans;
        if(i==0 && nums[0] != nums[1] ){return nums[0];}
        else if(i==n-1 && nums[n-1] != nums[n-2]){return nums[n-1];}
        else if(nums[i] != nums[i-1] && nums[i] != nums[i+1]){return nums[i];}
    }
}
using namespace std;

int main (){
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    cout << unique(nums);

    
    return 0;
}