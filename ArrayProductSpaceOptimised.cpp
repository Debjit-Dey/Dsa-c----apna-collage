#include <iostream>
#include <vector>
using namespace std;

void product(vector<int> nums){
    int n = nums.size();
    vector<int> ans(n,1);
    int suffix = 1;

    for(int i =1; i <n; i++){
        ans[i]= ans[i-1] * nums[i-1];
    }
    for (int j = n-2; j>=0; j--){
        suffix *= nums[j+1];
        ans[j] *= suffix; 
    }

    for(int elem: ans){
        cout << elem << endl;
    }
}

int main (){
    vector<int> nums = {1,2,3,4};
    product(nums);
    
    return 0;
}