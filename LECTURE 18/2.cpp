// leetcode 39
#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int>&nums,int target,int i,vector<int>&v){
    // base case
    if(i==nums.size()){
        if(target==0){// print
        for(int j=0;j<v.size();j++){
            cout<<v[j]<<" ";
        }
        cout<<endl;

        }
        return;
    }
    // recursive case :pick or not pick
    if(nums[i]<=target){//pick
        v.push_back(nums[i]);
        solve(nums,target-nums[i],i,v);
        v.pop_back();// backtracking (returning time)

    }
    solve(nums,target,i+1,v);//not pick
}
int main() {
    vector<int>nums={2,3,6,7};
    int target=7;
    vector<int>v;// o/p ke liye
    // backtracking: jab pick toh put in v
    //                 jab not pick toh remove from  v
    solve(nums,target,0,v);
    return 0;
}