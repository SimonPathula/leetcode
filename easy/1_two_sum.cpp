#include <bits/stdc++.h>
using namespace std;

string twoSumOptimal(vector<int> &a, int target){
    int n = a.size();
    int left = 0, right = n-1;
    sort(a.begin(), a.end());
    while(left < right){
        int sum = a[left] + a[right];
        if(sum == target) return "YES";
        else if(sum < target) left++;
        else right --;
    }
    return "NO";
}

vector<int> twoSumBetter(vector<int> &a, int target){
    map<int, int> mpp;
    int n = a.size();
    for(int i = 0; i < n; i++){
        int num = a[i];
        int more = target - num;
        if(mpp.find(more) != mpp.end()){
            return {mpp[more], i};
        }
        mpp[num] = i;
    }
    return {-1, -1};
}

vector<int> twoSumBrute(vector<int> &a, int target){
    int n = a.size();
    vector<int> points;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] + a[j] == target){
                return {i, j};
            }
        }
    }
    return points;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int target;
    cin >> target;
    vector<int> ans = twoSumBetter(a, target);
    for(int x: ans) cout << x << " ";
    return 0;
}