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
    vl a(4);
    fl(i, 0, 4) {
        ll k;
        cin >> k;
        a[i] = k;
    }

    string s;
    cin >> s;
    ll cnt = 0;

    fl(i, 0, s.length()) {
        if (s[i] == '1') {
            cnt += a[0];
        } else if (s[i] == '2') {
            cnt += a[1];
        } else if (s[i] == '3') {
            cnt += a[2];
        } else if (s[i] == '4') {
            cnt += a[3];
        }
    }

    cout << cnt << endl;
}

/*********************main******************/
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