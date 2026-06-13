#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums){
    int i = 0;
    for(int j = 1; j < nums.size(); j++){
        if(nums[i] != nums[j]){
            nums[i + 1] = nums[j];
            i++;
        }
    }
    return i+1;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i <= n - 1; i++) cin >> nums[i];
    cout << removeDuplicates(nums);

    return 0;
}