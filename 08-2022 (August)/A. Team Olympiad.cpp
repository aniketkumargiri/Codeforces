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
    ll n;
    cin >> n;

    vl c1;
    vl c2;
    vl c3;

    vl a(n);
    fl(0, n) {
        ll k;
        cin >> k;
        a[i] = k;

        if (a[i] == 1) {
            c1.push_back(i);
        } else if (a[i] == 2) {
            c2.push_back(i);
        } else
            c3.push_back(i);
    }

    ll mn = min({c1.size(), c2.size(), c3.size()});
    cout << mn << endl;

    fl(0, mn) {
        cout << c1[i] + 1 << " " << c2[i] + 1 << " " << c3[i] + 1 << endl;
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