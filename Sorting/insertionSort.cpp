#include <iostream>
using namespace std;

void insertion(int arr[], int n){
    for(int i= 1; i< n; i++){
        int temp = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > temp){
            arr[prev +1] = arr[prev];
            prev--;
        }
        arr[prev+1] = temp;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    }
    
    
}

int main (){
    int arr[] = { 10,50,30,20,40};
    insertion(arr, 5);
    
    return 0;
}