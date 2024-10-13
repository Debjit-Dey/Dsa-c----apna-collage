#include <iostream>
#include <vector>
using namespace std;

int bs(vector<int> nums, int tar, int st, int end){

    while(st <= end){
        int mid = st + (end - st) / 2;
        if(tar < nums[mid]){
            return bs(nums, tar, st, mid-1);
        }
        else if(tar > nums[mid]){
            return bs(nums, tar, mid +1, end);
        }
        else{
            return mid;
        }
    }
    return -1;
}

int main (){
    vector<int> nums = {-2,-1,0,1,2,3,4};
    int n = nums.size() -1;
    cout << bs(nums, 7, 0, n);
    
    return 0;
}