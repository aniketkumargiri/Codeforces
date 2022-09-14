#include <bits/stdc++.h>
using namespace std;
/***************templete********************/
#define ll long long int
typedef vector<ll> vl;
#define all(a) (a).begin(), (a).end()
#define fl(i, a, n) for (ll i = a; i < n; i++)
#define lb cout << endl;

/**********Sieve of Eratosthenes************/
vl sieveOfEratosthenes(ll m, ll n) {
    vector<bool> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;

    for (ll i = 2; i < n + 1; i++) {
        if (prime[i] && (ll)i * i <= n) {
            for (ll j = i * i; j < n + 1; j += i) {
                prime[j] = false;
            }
        }
    }

    vl ans;
    fl(i, m, n + 1) {
        if (prime[i]) {
            ans.push_back(i);
        }
    }

    return ans;
}

/*********************code******************/
void solve() {
    // Add your code here
    ll n;
    cin >> n;

    ll cnt = 0;
    fl(i, 1, n + 1) {
        vl temp = sieveOfEratosthenes(0, i);
        ll c = 0;
        fl(j, 0, temp.size()) {
            if (i % temp[j] == 0) {
                c++;
            }
        }
        if (c == 2) cnt++;
    }

    cout << cnt;
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