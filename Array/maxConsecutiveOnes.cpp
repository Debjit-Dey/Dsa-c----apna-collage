#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
        // nums.push_back(0);
        int count=0, maxCount = 0, n = nums.size();
        for(int i =0; i< n; i++){
            if(nums[i] == 1){
                count++;
            }
            else{
                
                count =0;
            }
            maxCount = max(maxCount, count);
        }
        return maxCount;
    }

int main (){
    vector<int> nums = {1,1,0,0,1,1,1,1};
    cout << findMaxConsecutiveOnes(nums);
    
    return 0;
}