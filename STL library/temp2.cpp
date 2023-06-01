#include<bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp(n);
        int k=0;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                temp[k]=nums[i];
                k++;
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<temp[i]<<" ";
        // }
        for(auto it=temp.begin();it!=temp.end();it++){
            cout<<*(it)<<" ";
        }
}

int main(){
    //int arr[]={2,5,1,8,7};
    // int k=2;
    // int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=0;i<n;i++){
    //     arr[(i+k)%n] = arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" ";
    // }
    // return 0;

    // vector<int> nums={3,5,9,1,2,7,5,3};
    // int n = nums.size();
    //     set<int> temp;
    //     for(int i=0;i<n;i++){
    //         temp.insert(nums[i]);
    //     }
    //     int k=temp.size();
    //     for(auto it=temp.begin();it!=temp.end();it++){
    //         cout<<*(it)<<" ";
    //     }
    //     cout<<endl<<"K: "<<k;
    //     return 0;

    vector<int> arr={0,1,0,3,12};
    moveZeroes(arr);
    return 0;
}