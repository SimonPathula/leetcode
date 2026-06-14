#include <bits/stdc++.h>
using namespace std;

//OPTIMAL APPROACH

void rotate(vector<int> &nums, int k){
    int n = nums.size();
    k = k % n;

    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
    reverse(nums.begin(), nums.end());
}

// BETTER APPROACH
// void rotate(vector<int> &nums, int k){
//     int n = nums.size();
//     k = k % n;
//     vector<int> temp;
//     for(int i = n - k; i < n; i++){
//         temp.push_back(nums[i]);
//     }
//     for(int i = n - k - 1; i >= 0; i--){
//         nums[i + k] = nums[i];
//     }
//     for(int i = 0; i < k; i++){
//         nums[i] = temp[i];
//     }
// }

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    int k;
    cin >> k;

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];

    rotate(nums, k);
    for(int x : nums){
        cout << x << " ";
    }

    return 0;
}