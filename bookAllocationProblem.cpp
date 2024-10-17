#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int> arr, int m, int n,int maxAllowedPages){
      int stu = 1; int pages = 0;
      for(int i=0; i< n; i++){
        if(arr[i] > maxAllowedPages) return false;
        if(pages + arr[i] <= maxAllowedPages){
            pages += arr[i];
        }
        else{
            stu++;
            pages = arr[i];
        }
      }
      return stu > m? false: true;
}


long long findPages(int n, vector<int> arr, int m) {
    if(m>n) return -1;
    int pageSum=0;
    for(int i =0; i<n; i++){
        pageSum += arr[i];
    }

    int st =0;
    int end = pageSum;
    int ans = -1;
    while(st <= end){
        int mid= st + (end -st)/2;
        if(isValid(arr,m,n,mid)){
            end = mid-1;
            ans = mid;
        }
        else{
            st = mid+1;
        }

    }
    return ans;
}



int main (){
    vector<int> arr = {12, 34, 67, 90};
    int n=4;
    int m = 2;

    cout << findPages(n,arr,m);
    
    return 0;
}