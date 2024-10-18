/* We are given total n boards. And length of each board is in the form of array. 
We have m number of painters. Each painter can paint 1 unit of board in 1 unit of time. 
Find the minimum time to print all the boards such that painters will only paint continuous sections of boards.*/

#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>arr, int n , int m, int mid){
    int maxAllowedTime = mid;
    int painter = 1;
    int time = 0;
    for(int i = 0; i<n; i++){
        if(time + arr[i] <= maxAllowedTime){
            time += arr[i];
        }
        else{
            painter ++;
            time = arr[i];
        }
    }
    return (painter <= m);
}

int timeToPaint(vector<int> arr, int n, int m){
    int ans = -1, sum =0, maxTime = 0;
    for (int i =0; i<n; i++){
        maxTime = max(maxTime, arr[i]);
        sum += arr[i];
    }

    int st = maxTime;
    int end = sum;
    while(st <= end){
        int mid = st + (end -st)/2;

        if(isValid(arr, n , m, mid)){
            ans = mid;
            end= mid-1;
        }
        else{
            st = mid +1;
        }
    }
    return ans;
}

int main(){
    vector<int> nums = {40,30,10,20};
    int m = 2;
    int n = 4;

    cout << timeToPaint(nums, n, m);

    return 0;
}


