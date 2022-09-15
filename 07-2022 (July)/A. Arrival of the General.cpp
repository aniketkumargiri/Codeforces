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

    ll mx = INT_MIN;
    ll mn = INT_MAX;
    ll mxIdx, mnIdx;

    fl(1, n + 1)
    {
        ll k;
        cin >> k;
        if (k > mx)
        {
            mx = k;
            mxIdx = i;
        }
        if (k <= mn)
        {
            mn = k;
            mnIdx = i;
        }
    }

    if (mxIdx > mnIdx)
    {
        cout << mxIdx - 1 + (n - mnIdx) - 1;
    }
    else
    {
        cout<<mxIdx - 1 + (n - mnIdx);
    }
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