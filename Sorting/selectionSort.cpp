#include <iostream>
using namespace std;

void selection(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        int minElem = i;
        for(int j= i+1; j<n; j++){
           if(arr[minElem] > arr[j]){
            minElem= j;
           }
        }

        swap(arr[minElem], arr[i]);
    }

    for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = { 10,50,30,20,40};
    selection(arr, 5);
    
    return 0;
}