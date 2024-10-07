#include <iostream>
#include <vector>
using namespace std;

int majorityElem(vector<int> nums){
    int frequency = 0;
    int n = nums.size();
    int ans = 0;
    for (int i = 0; i < n; i++){
        if(frequency == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            frequency++;
        }
        else{
            frequency--;
        }
        // if(frequency > n/2){
        //     return ans;
        // }
        // else{
        //     return -1;
        // }
        
    }
    // if(ans > n/2){
    //     return ans;
    // }
    // else{
    //     return -1;
    // }
    return ans;
}

using namespace std;

int main (){
    vector<int> nums = {1,2,1,2,1,2,2,1,1,3,3,3,3,3,3,3};
    cout << majorityElem(nums) << endl;
    
    return 0;
}