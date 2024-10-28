#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        
        reverse(nums.begin(), nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(), nums.end());
        
    }



int main (){
    vector<int> nums = {1,2,3,4,5,6};
    rotate(nums, 5);
    for(int el: nums){
        cout << el << " " ;
    }
    
    return 0;
}