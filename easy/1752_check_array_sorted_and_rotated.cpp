#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>& nums){
    int count = 0;
    int n = nums.size();

    if(nums[n - 1] > nums[0]) count ++;
    
    for(int i = 1; i <= n - 1; i++){
        if(nums[i] < nums[i - 1]){
            count ++;
        }
        if(count > 1) return false;

    }
    return true;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    cout<< bool(check(nums));

    return 0;
}