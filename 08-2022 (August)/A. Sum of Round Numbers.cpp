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

    vl a;
    ll k = 10;

    while (n)
    {
        if (n % k)
            a.push_back(n % k);
        n -= n % k;
        k *= 10;
    }

    cout << a.size() << endl;
    fl(0, a.size()) cout << a[i] << " ";
    cout << endl;
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