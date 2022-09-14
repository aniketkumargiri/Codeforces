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
    ll a, b;
    cin >> a >> b;

    ll cnt;
    if (a == b)
        cnt = 0;
    else if (a > b)
    {
        if ((a - b) % 2 == 0)
            cnt = 1;
        else
            cnt = 2;
    }
    else
    {
        if ((b - a) & 1)
            cnt = 1;
        else
            cnt = 2;
    }

    cout << cnt << endl;
}

//*********************main******************
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    for (ll t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}