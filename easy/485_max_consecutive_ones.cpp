#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums){
    int maximum = 0;
    int count = 0;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == 1){
            count ++;
            maximum = max(maximum, count);
        }
        else{
            count = 0;
        }
    }
    return maximum;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    cout << findMaxConsecutiveOnes(nums);

    return 0;
}