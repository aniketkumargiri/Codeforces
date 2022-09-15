#include <bits/stdc++.h>
using namespace std;
/***************templete********************/
#define ll long long int
typedef vector<ll> vl;
#define all(a) (a).begin(), (a).end()
#define fl(i, a, n) for (ll i = a; i < n; i++)
#define lb cout << endl;

/*********************code******************/
void solve() {
    // Add your code here
    ll n;
    cin >> n;

    vl a(n);
    ll odd = 0, even = 0;
    fl(i, 0, n) {
        ll k;
        cin >> k;
        a[i] = k;

        if (a[i] & 1) {
            odd++;
        } else {
            even++;
        }
    }

    if ((odd % 2 == 0 && even == 0) || (odd == 0)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

/*********************main******************/
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll tc = 1;
    cin >> tc;

    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}