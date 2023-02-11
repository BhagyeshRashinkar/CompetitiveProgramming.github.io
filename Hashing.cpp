<<<<<<< HEAD
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> hash(13,0);
    for(int i=0; i<n; i++){
        hash[a[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<nl;
    }

    return 0;
=======
#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    vector<int> hash(13,0);
    for(int i=0; i<n; i++){
        hash[a[i]] += 1;
    }

    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<nl;
    }

    return 0;
>>>>>>> e39179e06d66c50604cfbfcd2dda670525760d20
}