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

    if (n % 2 == 1)
        cout << -1 << endl;
    else {
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                cout << i + 2;
            else
                cout << i;
            cout << " ";
        }
    }
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