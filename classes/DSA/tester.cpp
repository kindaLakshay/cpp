//
// Created by lux on 10/6/23.
//
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,3,4,5,6,7,8,9};
    vector<int> v;
    int count = 0;
    int n = nums.size();
    bool flag = false;
    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){

            if(nums[i]==nums[j]) count++;
        }
        // cout<<nums[i]<<" count:"<<count<<endl;
        for(auto k: v) if(nums[i]==k) flag=true;
        if(flag) continue;
        if(count>floor(n/3)) v.push_back(nums[i]);
        count = 0;

    }
    for(auto o: v) cout<<o<<" ";

}