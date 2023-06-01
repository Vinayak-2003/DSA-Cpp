#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={1,0,2,0,0,5,7,3};
    int n=nums.size();
    vector<int> temp(n);
    for(int i=0;i<n;i++){
        if(nums[i]!=0){
            temp.push_back(nums[i]);
        }
    }
    
    int m=temp.size();

    for(int i=0;i<m;i++){
        nums[i] = temp[i];
    }

    for(int i=m;i<n;i++){
        nums[i]=0;
    }

    for(auto it=temp.begin();it!=temp.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}