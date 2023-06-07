#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d){
    int max = 0;
    
    vector<int> nums;
    
    nums.push_back(a);
    nums.push_back(b);
    nums.push_back(c);
    nums.push_back(d);
    
    for (int i = 0; i < 4; i++){
        
        if(nums[i] > max){
            max = nums[i];
        }
    
    }
    
    return max;
}    

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}