//**********************Algorithm**********************
//***************Sort***************
#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};

    int num=7;
    int cnt=__builtin_popcount(num);
    cout<<cnt<<endl;                                      //3

    int n=6;
    int cn=__builtin_popcount(n);
    cout<<cn<<endl;                                            //2

    long long no=127567258594;
    int c=__builtin_popcountll(no);
    cout<<c<<endl;

    string s = "123";
    do{
        cout<<s<<" ";
    }while(next_permutation(s.begin(),s.end()));

    cout<<endl;

    string st="231";
    sort(st.begin(),st.end());
    do{
        cout<<st<<" ";
    }while(next_permutation(st.begin(),st.end()));

    return 0;
}