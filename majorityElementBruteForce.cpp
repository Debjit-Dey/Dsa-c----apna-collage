#include <iostream>
#include <vector>
using namespace std;

int majorityElem(vector<int> nums){
    int n = nums.size();
    int count;
    for (int i =0; i < n; i++){
        count = 1;
        for(int j= i+1; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }

        }
        if(count > n/2){
            return nums[i];
        }
        else{
            return -1;
        }
    }
    
}

int main (){

    vector<int> nums = {1, 2, 1, 2, 2,1,1};
    int ans = majorityElem(nums);
    cout << ans << endl;
    
    return 0;
}