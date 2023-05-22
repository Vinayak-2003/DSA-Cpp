//return the set of integers such that each pair of sum equals to 's'
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,S;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //vector <vector<int>> ans;
    int ele1,ele2;
    cout<<"Enter value of Sum: ";
    cin>>S;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==S){
                ele1=arr[i];
                ele2=arr[j];
                pair <int,int> temp = {ele1,ele2};
                cout<<temp.first<<" "<<temp.second<<endl;
                cout<<ele1<<" "<<ele2<<endl;
                // vector <int> temp;
                // temp.push_back(min(arr[i], arr[j]));
                // temp.push_back(max(arr[i], arr[j]));
                // ans.push_back(temp);
            }
        }
    }
    
    // return ans;
    // for(auto it=ans.begin();it!=ans.end();it++){
    //     cout<<*(it)<<" ";
    // }

    return 0;
}