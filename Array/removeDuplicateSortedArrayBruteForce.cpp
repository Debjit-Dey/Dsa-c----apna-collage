#include <iostream>
#include <vector>
#include <set>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    set<int> mySet;
    for(int i =0; i< nums.size(); i++){
        mySet.insert(nums[i]);
    }
    int a=0;
    for(auto elem: mySet){
        nums[a] = elem;
        a++;
    }
   
    for(auto elem: nums){
        cout << elem << "  ";
    }
    cout<< endl;
     return mySet.size();
}

int main (){

    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    cout << removeDuplicates(nums);
    return 0;
}