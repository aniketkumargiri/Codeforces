#include <bits/stdc++.h>
using namespace std;
//***************templete********************
#define ll long long int
typedef vector<ll> vl;
#define fl(a, n) for (ll i = a; i < n; i++)
#define lb cout << endl;

//*********************code******************
void solve() {
    // Add your code here
    ll n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    ll drink = k * l;
    ll toasts = drink / nl;
    ll limes = c * d;
    ll salt = p / np;

    cout << min({toasts, limes, salt}) / n;
}

//*********************main******************
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    // cin >> tc;

    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}