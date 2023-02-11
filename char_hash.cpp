#include <bits/stdc++.h>
#define ll long long int
#define nl '\n'
using namespace std;

int main()
{
    string s;
    cin >> s;

    // int hash[256] ={0};

    // for (int i = 0; i < s.length(); i++)
    // {
    //     hash[s[i]] += 1;
    // }

    // int q;
    // cin>>q;
    // while (q--)
    // {
    //     char c;
    //     cin>>c;
    //     int x = c;
    //     cout<<hash[c]<<nl;
    // }

    unordered_map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;
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
        char c;
        cin >> c;
        cout << c << " " << mp[c] << nl;
    }

    return 0;
}