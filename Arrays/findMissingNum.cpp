#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    for(auto it=nums.begin();it!=nums.end();it++){
        nums.push_back(*(it));
    }

    for(auto it:nums){
        cout<<it<<" ";
    }

    return 0;
}