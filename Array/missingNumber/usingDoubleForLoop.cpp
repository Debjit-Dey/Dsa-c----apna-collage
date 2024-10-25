// Given an array nums containing n distinct numbers in the range [0, n], 
// return the only number in the range that is missing from the array.
#include <iostream>
#include <vector>
using namespace std;

int missNum(vector<int> nums){
    int n = nums.size(), flag;
    for (int i = 0; i<=n; i++){
        flag = 0;
        for(int j = 0; j< n; j++){
            if(i == nums[j]){
                flag =1;
                break;
            }
        }
        if(flag == 0) return i;
    }
    return -1;

}

int main (){
    // vector<int> a = {0, 2, 4, 5};
        vector<int> a = {1};

    cout << missNum(a) << endl;
    
    return 0;
}