#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // vector<int> hash(13, 0);
    // for (int i = 0; i < n; i++)
    // {
    //     hash[a[i]] += 1;
    // }

    // int q;
    // cin >> q;
    // while (q--)
    // {
    //     int num;
    //     cin >> num;
    //     cout << hash[num] << nl;
    // }

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[a[i]]++;
    }

    for (auto it : mp)
    {
        cout << it.first << " " << it.second << nl;
    }

    cout << nl;

    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << num << " " << mp[num] << nl;
    }
    return 0;
}