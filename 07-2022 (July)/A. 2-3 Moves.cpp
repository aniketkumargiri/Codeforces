/*
Author: Anikthe_27
*/
#include <bits/stdc++.h>
using namespace std;
/*********************templete********************/
#define ll long long int
#define ld long double
#define fl(i, a, n) for (ll i = a; i < n; i++)
#define vl vector<ll>
#define pl pair<ll, ll>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll, ll>>
#define all(v) (v).begin(), (v).end()
#define mp make_pair
#define pu push_back
#define po pop_back
#define ff first
#define ss second
#define in insert
#define rm remove
#define er erase
#define sz(x) ((ll)x.size())
#define ln(x) ((ll)x.length())
#define sp " "
#define nl "\n";
#define rt return
const ll mod = 1e9 + 7;
#define lb lower_bound
#define ub upper_bound
#define mx_arr(v) *max_element(all(v))
#define mn_arr(v) *min_element(all(v))
#define sum_arr(v) accumulate(all(v), 0)
#define setbits(x) __builtin_popcountll(x)
ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : (a / b) + 1; }
ll digits(ll n) { return floor(log10(n) + 1); }
ll hcf(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * 1LL * b) / hcf(a, b); }
 
/*******************Utility******************/
struct ch {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM =
            chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
bool comparator(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    return (a.second < b.second);
}
 
template <typename T>
istream &operator>>(istream &input, vector<T> &v) {
    for (auto &i : v) {
        cin >> i;
    }
    return input;
}
 
template <typename T>
ostream &operator<<(ostream &output, vector<T> &v) {
    for (auto &i : v) {
        cout << i << sp;
    }
    return output;
}
 
/*********************code******************/
void solve() {
    // Add your code here
    ll n;
    cin >> n;
 
    if (n == 1 || n == -1) {
        cout << 2 << nl;
        rt;
    }
 
    if (n == 2 || n == -2) {
        cout << 1 << nl;
        rt;
    }
 
    if (n % 3 == 0) {
        cout << n / 3 << nl;
        rt;
    }
    ll t1 = n / 2;
    ll t2 = n / 3 + 1;
    cout << min(t1, t2) << nl;
 
    rt;
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
 
    rt 0;
}