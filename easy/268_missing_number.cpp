#include <bits/stdc++.h>
using namespace std;
// Optimal - 1
int findMissingNumber(vector<int> &nums){
    int n = nums.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += nums[i];
    }
    int actual_sum = (n + 1)*(n + 2)/2;

    return actual_sum - sum;
}

//Optimal - 2
int missingNumber_v2(vector<int>& nums) {
    int n = nums.size();
    int xor1 = 0;
    int xor2 = 0;
    for(int i = 0; i < n; i++){
        xor2 = xor2 ^ nums[i];
        xor1 = xor1 ^ i;
    }
    xor1 = xor1 ^ n;
    return xor1 ^ xor2;
}

//BRUTE
// int findMissingNumber(vector<int> &nums){
//     int n = nums.size() + 1;
//     for(int i = 1; i <= n; i++){
//         bool found = false;
//         for(int j = 0; j < n - 1; j++){
//             if(nums[j] == i){
//                 found = true;
//                 break;
//             }
//         }
//         if(!found) return i;
//     }
//     return -1;
// }

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    cout << findMissingNumber(nums);

    return 0;
}