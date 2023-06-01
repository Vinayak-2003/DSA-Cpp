#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={5,8,21,43,6,8,76,8,55,101,74,324,63,83};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    set<int> sorted;
    for(int i=0;i<n;i++){
        sorted.insert(arr[i]);
    }
    for(auto it=sorted.begin();it!=sorted.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    int m = sorted.size();
    cout<<m<<endl;
    set<int>::iterator it;
    it = prev(sorted.end());
    cout<<*(it)<<endl;
    sorted.erase(it);
    for(auto it=sorted.begin();it!=sorted.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    set<int>::iterator itt;
    itt = prev(sorted.end());
    cout<<*(itt)<<endl;
    
    return 0;
}
