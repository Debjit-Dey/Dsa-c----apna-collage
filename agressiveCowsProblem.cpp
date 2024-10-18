
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool validDist(vector<int> arr, int c, int n, int minPossibleDist){
    int cows = 1; 
    int lastPos = arr[0];
    for(int i =1; i < n; i++){
    if(arr[i] - lastPos >= minPossibleDist){ 
        cows++;
        lastPos = arr[i];
       }
       if(cows == c) return true;

    }
    return false;
}

int findDistance(vector<int> arr, int c, int n){
    sort(arr.begin(), arr.end());

    int st = 1;
    int end = arr[n-1] - arr[0];
    int ans = -1;
    while(st <= end){
        int mid = st + (end - st) /2;
        if(validDist(arr, c, n, mid)){
            ans = mid;
            st = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main (){
    int n = 5;
    int c = 3;
    vector<int> arr = {1,2,8,4,9};
    cout << findDistance(arr, c,n);
    
    return 0;
}