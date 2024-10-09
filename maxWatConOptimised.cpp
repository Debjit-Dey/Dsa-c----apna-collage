#include <iostream>
#include <vector>
using namespace std;

int maxArea(vector<int> height){

        int n = height.size();
        int maxArea = 0;
        int left = 0;
        int right = n-1;
        while(left < right){
            int width = right - left;
            int currentHeight = min(height[left], height[right]);
            int currentArea = width * currentHeight;
            maxArea = max(currentArea, maxArea);
            if(height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxArea;
}

int main (){
    vector <int> height = {1,8,6,2,5,4,8,3,7};
    cout << maxArea(height) << endl;
    
    return 0;
}