#include <iostream>
#include <vector>
using namespace std;

int BS(vector<int> nums, int target){
    int st = 0;
    int end = nums.size() -1;
    while(st <= end){
        int mid = st + (end - st)/ 2;
        if(target < nums[mid]){
            end = mid -1;
        }
        else if(target > nums[mid]){
            st = mid + 1;
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main (){

    vector<int> nums = {-2,-1,0,1,2,3,4};
    cout << BS(nums, 5);
    
    return 0;
}