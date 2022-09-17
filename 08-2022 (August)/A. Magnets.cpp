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

    ll s1, s2;
    ll cnt = 0;
    fl(0, n)
    {
        cin >> s1;
        if (s1 != s2)
            cnt++;
        s2 = s1;
    }

    cout << cnt;
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