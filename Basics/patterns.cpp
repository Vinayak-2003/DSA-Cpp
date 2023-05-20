//************PATTERNS****************
#include<iostream>
using namespace std;

//**********************Pattern 1**********************************
//* * *
//* * *
//* * *
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//***********************Pattern 2*********************************
//*
//* *
//* * *
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 3**********************************
//1
//1 2
//1 2 3
//1 2 3 4
// void printPattern(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 4**********************************
//* * *
//* *
//*
// void printPattern(int n){
//     for(int i=1;i<=n;i++){
//         for(int j=0;j<n-i+1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//***********************Pattern 5*********************************
//1 2 3 4 
//1 2 3
//1 2
//1
// void printPattern(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//***********************Pattern 6*********************************
//      *                        [2,1,2]
//    * * *                      [1,3,1]
//  * * * * *                    [0,5,0]
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         //star
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         //space
//         for(int j=0;j<n-i-1;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 7**********************************
//* * * * *                 [0,5,0]
//  * * *                   [1,3,1]
//    *                     [2,1,2]
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<=i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 8**********************************
//      *                       [4,1,4]
//     ***                      [3,3,3]
//    *****                     [2,5,2]                     
//   *******                    [1,7,1]
//  *********                   [0,9,0]
//  *********                   [0,9,0]
//   *******                    [1,7,1]
//    *****                     [2,5,2]
//     ***                      [3,3,3]
//      *                       [4,1,4]
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*i+1;j++){
//             cout<<"*";
//         }
//         for(int j=0;j<n-i-1;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         for(int j=0;j<2*n-(2*i+1);j++){
//             cout<<"*";
//         }
//         for(int j=0;j<i;j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 9**********************************
//*
//* *
//* * *
//* * * *
//* * *
//* *
//*
// void printPattern(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n-i-1;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 10**********************************
//1
//0 1
//1 0 1
//0 1 0 1
//1 0 1 0 1
// void printPattern(int n){
//     int start = 1;
//     for(int i=0;i<n;i++){
//         if(i%2==0)
//             start=1;
//         else
//             start = 0;
//         for(int j=0;j<=i;j++){
//             cout<<start<<" ";
//             start = 1 - start;
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 11**********************************
//1             1                   [no.,space,no.][1,6,1]      (2*n-(2*i))
//1 2         2 1                                  [2,4,2]
//1 2 3     3 2 1                                  [3,2,3]
//1 2 3 4 4 3 2 1                                  [4,0,4]
// void printPattern(int n){
//     for(int i=1;i<=n;i++){
//         //number
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         //space
//         for(int j=1;j<=2*(n-i);j++){
//             cout<<"  ";
//         }
//         //number
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 11**********************************
//1
//2 3
//4 5 6
//7 8 9 10
// void printPattern(int n){
//     int num = 1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             cout<<num<<" ";
//             num++;
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 12**********************************
//A
//A B
//A B C
//A B C D
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(char j='A';j<='A'+i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 12**********************************
//A B C D
//A B C
//A B
//A
// void printPattern(int n){
//     for(int i=0;i<n;i++){
//         for(char j='A';j<='A'+(n-i-1);j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

//**********************Pattern 13**********************************
//A
//B B
//C C C
//D D D D
void printPattern(int n){
    for(int i=0;i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    printPattern(n);
    return 0;
}