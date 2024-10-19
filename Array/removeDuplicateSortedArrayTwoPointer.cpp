#include <iostream>
#include <vector>
using namespace std;


int removeDuplicates(vector<int>& nums) {
    if(nums.empty()) return 0;
    int n = nums.size();
    int pos = 0;
    for(int i=1; i<n; i++){
        if(nums[pos] != nums[i]){
            nums[pos+1] = nums[i];
            pos++;
        }
        
    }
    return pos+1;
}
int main (){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        // vector<int> nums = {};

    cout << removeDuplicates(nums);
    return 0;
}