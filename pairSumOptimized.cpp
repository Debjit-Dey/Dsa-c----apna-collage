#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int n = nums.size();
    int i = 0;
    int j = n-1;
    vector<int> ans;
    sort(nums.begin(), nums.end());
    while(i< j){
        int sum = nums[i] + nums[j];
        if(sum > target){
            j--;
        }
        else if(sum < target){
            i++;
        }
        else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;

        }
    }
    return ans;
}


int main (){
    vector<int> nums = {2, 7, 11, 15};
    int target = 22;

    vector<int> ans = pairSum(nums, target);
    cout<< ans[0] << " , " << ans[1] << endl;
    
    return 0;
}