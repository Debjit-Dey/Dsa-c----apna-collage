#include <iostream>
#include <vector>
using namespace std;

void product(vector<int> nums){

    int n = nums.size();
   
    vector<int> ans;
    for(int i=0; i<n; i++){
         int p =1;
        for(int j=0; j<n; j++){
            if(i != j){
                p *= nums[j]; 
            }
        }
        ans.push_back(p);
    }
    for(int i: ans){
        cout << i << endl;
    }
}

int main (){
    vector<int> a= {1,2,3,4};
    product(a);
    
    return 0;
}