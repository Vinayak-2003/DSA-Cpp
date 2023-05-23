#include<bits/stdc++.h>
using namespace std;

void reverseString(char name[], int n){                 //reverse function
    int start=0;
    int end=n-1;

    while(start<end){
        swap(name[start], name[end]);
        start++;
        end--;
    }
}

int getLength(char name[]){                             //length function
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){                                     //main function 
    char name[20];
    cout<<"Enter your name ";
    cin>>name;

    int len = getLength(name);
    cout<<"Length of the string is "<<len<<endl;

    reverseString(name,len);
    cout<<"Your name is "<<name;
    return 0;
}