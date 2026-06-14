#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums){
    int n = nums.size();

    int j = - 1;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
        j = i;
        break;
        }
    }

    if(j == -1) return;

    for(int i = j + 1; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    moveZeroes(nums); 
    for (int x : nums){
        cout << x << " ";
    }


    return 0;
}