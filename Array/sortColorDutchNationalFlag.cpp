#include <iostream>
#include <vector>
using namespace std;

void sort(vector <int> nums){
    int n = nums.size();
    int st = 0;
    int mid = 0;
    int end = n-1;
    while(mid <= end){
        if(nums[mid] == 0){
            swap(nums[st], nums[mid]);
            st++;
            mid++;
        }
        else if(nums[mid] == 1){
            mid ++;
        }
        else{
            swap(nums[mid], nums[end]);
            end--;
        }
    }

    for(int el: nums){
        cout << el << " " ;
    }
}

using namespace std;

int main (){
    vector<int>nums = {2,1,0,1,2,1,2,0,0,0,2,1};
    sort(nums);
    
    return 0;
}