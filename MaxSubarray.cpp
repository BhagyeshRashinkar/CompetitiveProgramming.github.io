#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> vv(n);

    for(int i=0; i<n; i++){
        cin>>vv[i];
    }

    // Brute force O(n*n*n) time complexity;
    // vector<vector<int>> v;

    int maxi = INT_MIN;

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         vector<int> vt;
    //         int sum = 0;
    //         for(int k=i; k<=j; k++){
    //             sum += vv[k];
    //             vt.push_back(vv[k]);
    //         }
    //         maxi = max(maxi,sum);
    //         v.push_back(vt);
    //     }
    // }

    // for(auto it: v){
    //     for(auto iit: it){
    //         cout<<iit<<" ";
    //     }
    //     cout<<nl;
    // }

    // cout<<maxi<<nl;

    // Optimal approach O(n*n) time complexity;
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum += vv[j];
    //         maxi = max(maxi, sum);
    //     }
    // }

    // cout<<maxi<<nl;

    //Kadane's Algo O(n) time complexity; 
    int sum = 0;
    maxi = INT_MIN;

    for(auto it: vv){
        sum += it;
        maxi = max(maxi, sum);
        if(sum<0){
            sum = 0;
        }

        if(sum>0){
            cout<<it<<" ";
        }
    }

    cout<<nl<<maxi<<nl;


    
    return 0;
}