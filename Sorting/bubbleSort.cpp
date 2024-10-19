#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        bool swapped = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

int main (){
    int arr[] = { 10,50,30,20,40};
    bubble(arr, 5);
    
    return 0;
}