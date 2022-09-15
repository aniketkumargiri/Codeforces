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
    ll n;
    cin >> n;

    string str;
    ll ans = 0;
    while (cin >> str)
    {
        if (str == "Tetrahedron")
            ans += 4;
        if (str == "Cube")
            ans += 6;
        if (str == "Octahedron")
            ans += 8;
        if (str == "Dodecahedron")
            ans += 12;
        if (str == "Icosahedron")
            ans += 20;
    }

    cout<<ans;
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