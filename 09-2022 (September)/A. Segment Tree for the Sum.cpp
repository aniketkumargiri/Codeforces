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
    ll n, m, i;
    cin >> n >> m;
    vector<ll> arr(n);
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }

    while (__builtin_popcount(n) != 1) {
        n++;
        arr.push_back(0);
    }
    vector<ll> segTree(2 * n);
    for (i = 0; i < n; i++) {
        segTree[n + i] = arr[i];
    }
    for (i = n - 1; i >= 0; i--) {
        segTree[i] = segTree[2 * i] + segTree[2 * i + 1];
    }

    function<ll(ll, ll, ll, ll, ll)> query = [&](ll node, ll lx, ll rx, ll l, ll r) {
        if (lx >= l && rx <= r) {
            return segTree[node];
        }
        if (r < lx || l > rx) {
            return 0LL;
        }
        ll mid = (lx + rx) / 2;
        ll a = query(node * 2, lx, mid, l, r);
        ll b = query(node * 2 + 1, mid + 1, rx, l, r);
        return a + b;
    };

    function<void(ll, ll)> update = [&](ll pos, ll val) {
        segTree[n + pos] = val;
        for (i = (n + pos) / 2; i > 0; i /= 2) {
            segTree[i] = segTree[i * 2] + segTree[i * 2 + 1];
        }
    };

    while (m--) {
        ll cond;
        cin >> cond;
        if (cond == 1) {
            ll pos, val;
            cin >> pos >> val;
            update(pos, val);
        } else {
            ll l, r;
            cin >> l >> r;
            cout << query(1, 0, n - 1, l, r - 1) << "\n";
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