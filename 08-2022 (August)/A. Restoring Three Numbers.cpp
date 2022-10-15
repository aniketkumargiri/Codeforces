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
    ll x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;

    ll mx = max({x1, x2, x3, x4});
    ll a, b, c, d;

    a = mx - x1;
    b = mx - x2;
    c = mx - x3;
    d = mx - x4;
    if (d == 0)
        cout << a << " " << b << " " << c;
    else if (c == 0)
        cout << a << " " << b << " " << d;
    else if (b == 0)
        cout << a << " " << d << " " << c;
    else if (a == 0)
        cout << d << " " << b << " " << c;
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