#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
        int n = nums.size();
        int st = 0; 
        int end = n-1;
        while(st <= end){
            int mid = st + (end - st)/2;
            if(nums[mid] == target){
                return mid;
            }

            else if(nums[st] <= nums[mid]){
                if(nums[st] <= target && target < nums[mid]){
                    end = mid -1;
                }
                else{
                    st = mid +1;
                }

            }
            else{
                if(nums[mid] < target && target <= nums[end]){
                    st = mid +1;
                }
                else{
                    end = mid -1;
                }

            }
        }
        return -1;
         
    }

int main (){

    vector<int> nums = {4,5,6,7,0,1,2};
    cout << search(nums, 7);
    
    return 0;
}