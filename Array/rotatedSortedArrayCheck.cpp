#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> nums){
    int n = nums.size(), count =0;
    for(int i =0; i < n-1; i++){
        if(nums[i] > nums[i+1]) {
            count++;
        }
    }
    if(nums[0] < nums[n-1]) {
        count++;
    }
    return (count <= 1);
}

using namespace std;

int main (){
    vector<int> nums = {3,4,5,1,2};
    cout<< check(nums);
    
    return 0;
}