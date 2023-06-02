#include <bits/stdc++.h>
using namespace std;

//***********************BRUTE FORCE TECHNIQUE************************
// vector<int> findUnion(int arr1[], int arr2[], int n, int m)
//     {
//         set<int> temp;
//         vector<int> ans;
//         for(int i=0;i<n;i++){                    //O(nlogn)
//             temp.insert(arr1[i]);
//         }
//         for(int i=0;i<m;i++){                    //O(nlogn)
//             temp.insert(arr2[i]);
//         }
//         for(auto & it : temp){                   //O(n+m)
//             ans.push_back(it);
//         }
//         return ans;
//     }

//Time complexity: O(nlogn + mlogm) + O(n+m)
//Space complexity: O(n+m)--> for implementation and O(n+m)--> just for returning the answer


//***********************OPTIMAL APPROACH************************
vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> unionArr;
        int i=0,j=0;
        while(i<n && j<m){
            if(arr1[i] <= arr2[j]){
                if(unionArr.size()==0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
                }
                i++;
            }

            else{
                if(unionArr.size()==0 || unionArr.back() != arr2[j]){
                    unionArr.push_back(arr2[j]);
                }
                j++;
            }
        }

        while(i<n){                                     //array 2 is finished
            if(unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

        while(j<m){                                     //array 1 is finished
            if(unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }

        return unionArr;
    }

//Time complexity: O(n+m)
//Space complexity: O(n+m)


int main()
{
    int N, M;
    cin >> N >> M;
    int arr1[N], arr2[M];
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < M; i++)
    {
        cin >> arr2[i];
    }

    vector<int> ans = findUnion(arr1, arr2, N, M);
    for (int i : ans)
        cout << i << " ";
    cout << endl;
    return 0;
}