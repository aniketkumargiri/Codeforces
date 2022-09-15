#include <bits/stdc++.h>
using namespace std;
//***************templete********************
#define ll long long int
typedef vector<ll> vl;
#define fl(a, n) for (ll i = a; i < n; i++)
const ll MOD = 1e9 + 7;

//*********************code******************
void solve()
{
    // Add your code here
    string s1;
    getline(cin, s1);
    string s2;
    getline(cin, s2);
    string s3;
    getline(cin, s3);

    map<char, int> m12;
    fl(0, s1.length()) m12[s1[i]]++;
    fl(0, s2.length()) m12[s2[i]]++;

    map<char, int> m3;
    fl(0, s3.length()) m3[s3[i]]++;

    if (m12 == m3)
        cout << "YES\n";
    else
        cout << "NO\n";
}

//*********************main******************
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    // cin >> tc;

    for (ll t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}