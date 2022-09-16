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
    ll n, q;
    cin >> n >> q;

    vl a(n);
    fl(0, n) {
        ll k;
        cin >> k;
        a[i] = k;
    }

    vl b(q);
    fl(0, q) {
        ll k;
        cin >> k;
        b[i] = k;
    }

    fl(0, q) {
        bool bs = binary_search(a.begin(), a.end(), b[i]);
        if (bs) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
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