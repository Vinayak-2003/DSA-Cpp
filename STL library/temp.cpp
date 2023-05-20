#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int c;
    cin>>c;
    int A[c];
    for(int i=0;i<c;i++){
        cin>>A[i];
    }
    int n;
    for(int i=0;i<c;i++){
        if(A[0]==0){
            n=1;
            break;
        }
        else if(A[i]==0){
            n=i+1;
            break;
        }
        else if(A[c]==0){
            n=c;
            break;
        }
    }
    cout<<n;
    return 0;
}
