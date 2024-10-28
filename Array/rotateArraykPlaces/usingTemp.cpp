#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n = nums.size();
    k=k%n;
    vector<int> temp(k);
    for(int i =n-k; i<n; i++){
        temp[i-n+k] = nums[i];
    }
    for(int i =n-k-1; i>=0; i--){
        nums[i+k] = nums[i];
    }
    for(int i = 0; i< k; i++){
        nums[i] = temp[i];
    }
       
        
    }



int main (){
    vector<int> nums = {1,2,3,4,5,6};
    rotate(nums, 10);
    for(int el: nums){
        cout << el << " " ;
    }
    
    return 0;
}