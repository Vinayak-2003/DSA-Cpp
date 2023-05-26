#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int t;
//     cin>>t;
//     while(t--){
//         int n,m;
//         cin>>n>>m;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         int sfuel=0;
//         for(int i=0;i<n;i++){
//             sfuel = sfuel + A[i];
//         }
//         if(sfuel<=m){                        
//             cout<<0;
//         }
//         else{
//             cout<<sfuel-m;
//         }
//     }
//     return 0;
// }


// int main() {
//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++){
//             cin>>A[i];
//         }
//         int count=0;
//         for(int i=0;i<n;i++){
//             int j=i+1;
//             if(j<n){
//                 int sum = A[i] + A[j];
//                 if(sum%2==0){
//                     continue;
//                 }
//                 else{
//                     if((A[j]%2!=0)){
//                         i++;
//                         count++;
//                     }   
//                 }
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector <int> books;
    for(auto it=books.begin();it!=books.end();it++){
        books.erase(books[it]);
    }
    return 0;
}
