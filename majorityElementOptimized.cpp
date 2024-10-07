#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int majorityElem(vector<int> nums){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    int frequency = 1;
    int ans = nums[0];
    for(int i = 1; i < n; i++){
        if (nums[i] == nums[i-1]){
            frequency++;
        }
        else{
            frequency=1;
            ans = nums[i];
        }

        if(frequency > n/2){
            return ans;
        }
        // else{
        //     return -1;
        // }
    }
    return -1;

}

int main (){
    vector<int> nums = {1,2,1,2,1,1};
    int ans = majorityElem(nums);
    cout << ans << endl;

    
    return 0;
}