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
    ll n, m;
    cin >> n >> m;

    vl a(n);
    fl(0, n) cin >> a[i];

    string s="";
    fl(0, m) s += 'B';

    fl(0, n)
    {
        ll first = a[i] - 1;
        ll second = (m + 1 - a[i]) - 1;

        if (first < second)
        {
            if (s[first] != 'A')
                s[first] = 'A';
            else
                s[second] = 'A';
        }
        else
        {
            if (s[second] != 'A')
                s[second] = 'A';
            else
                s[first] = 'A';
        }
    }

    cout << s << endl;
}

//*********************main******************
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc = 1;
    cin >> tc;

    for (int t = 1; t <= tc; t++)
    {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}