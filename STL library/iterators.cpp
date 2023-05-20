//***************ITERATORS******************
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(9);
    cout<<v[2]<<endl;

    vector <int>::iterator it = v.begin();
    cout<<*(it)<<endl;

    vector <int>::iterator itt = v.end();
    cout<<*(it)<<endl;

    for(vector <int>::iterator it = v.begin();it!=v.end();it++){            //print all the values through lopps
        cout<<*(it)<<" ";
    }
    cout<<endl;
    for(auto it=v.begin();it!=v.end();it++){                                //automatically assigns data type according to the data
        cout<<*(it)<<" ";
    }

    cout<<endl;

    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    for(vector <int>::iterator it=v.begin();it!=v.end();it++){                  //printing more elements
        cout<<*(it)<<" ";                                                       //{5 8 9 20 30 40} 
    }

    cout<<endl;

    //**********Deleting an element************
    v.erase(v.begin()+1);                                                       //deleting 2nd element
    for(vector <int>::iterator it=v.begin();it!=v.end();it++){          
        cout<<*(it)<<" ";                                                       //{5 9 20 30 40} 
    }

    cout<<endl;

    v.erase(v.begin()+1,v.begin()+3);                                           //deleting more than 1 element
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";                                                       //5 30 40 
    }
    cout<<endl;

    //*************Insert an element**************
    v.insert(v.begin(),80);                                         //{80 5 30 40}  (starting)
    v.insert(v.begin()+2,100);                                      //{80 5 100 30 40}  (at any position)
    v.insert(v.begin()+3,2,90);                                     //{80 5 100 90 90 30 40}    (at any position but multiple values)
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;                                     //size of the vector
    v.pop_back();                                             //pops last element(40){80 5 100 90 90 30}
    for(vector <int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    cout<<v.empty()<<endl;                                    //if a vector has any element than it returns '0'(here 0)

    v.clear();                                                //deletes or clears the whole vector
    for(auto it = v.begin();it!=v.end();it++){                //does not print anything because vector is deleted
        cout<<*(it)<<" ";
    }

    cout<<endl<<v.empty();                                    //returns 1 as the vector is empty
    return 0;
}