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
    string s;
    cin >> s;

    ll len = s.size();
    ll dig = s[0] - '1';

    cout << dig * 10 + ((len)*1LL * (len + 1)) / 2 << endl;
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