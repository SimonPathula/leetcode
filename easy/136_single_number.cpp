#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> & nums){
    int n = nums.size();
    int xorr = 0;
    for(int i = 0; i < n; i++){
        xorr = xorr ^ nums[i];
    }
    return xorr; 
}

// BETTER APPROACH; map can also be used instead of hashing
// int singleNumber(vector<int> &nums){
//     int n = nums.size();
//     vector<int> hash(n, 0);

//     for(int i = 0; i < n; i++){
//         hash[nums[i]]++;
//     }
//     for(int i = 0; i < n; i++){
//         if(hash[nums[i]] == 1){
//             return nums[i];
//         }
//     }
//     return -1;
// }

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    cout << singleNumber(nums);

    return 0;
}