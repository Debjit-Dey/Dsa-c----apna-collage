#include <iostream>
#include <vector>
using namespace std;

int maxWater(vector<int> height)
{   
    int n = height.size();
    int maxArea = 0;
    for (int st=0; st<n; st++){
        for(int ed = st+1; ed<n; ed++){
            int width = ed - st;
            int currHeight = min(height[st], height[ed]);
            int currArea = width * currHeight;
            maxArea = max(maxArea, currArea);
        }

    }
    return maxArea;
}
int main (){
    vector<int> height = {1,8,6,2,5,4,8,3,7}; 
    cout << maxWater(height) << endl;
    
    return 0;
}