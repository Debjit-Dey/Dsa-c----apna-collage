#include <iostream>
#include <vector>
using namespace std;

int peak(vector<int> nums){
    int n = nums.size();
    int st = 1;
    int end = n-2;

    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid] > nums[mid+1] && nums[mid] > mid -1){
            return mid;
        }
        else if(nums[mid] > nums[mid -1]){
            st = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

int main (){

    vector<int> nums = {0,2,1,0};
    cout << peak(nums);
    
    return 0;
}