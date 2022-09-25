/* Author: Aniket Giri */
#include <bits/stdc++.h>
using namespace std;
/*********************templete********************/
#define ll long long int
#define ld long double
#define ull unsigned long long
#define fl(i, a, n) for (ll i = a; i < n; i++)
#define vl vector<ll>
#define pl pair<ll, ll>
#define pql priority_queue<ll>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll, ll>>
#define all(v) (v).begin(), (v).end()
#define mk make_pair
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
#define nl "\n"
#define mns cout << "-1" << endl
#define ys cout << "YES" << endl
#define no cout << "NO" << endl
#define debug(x) cout << x << endl
#define rt return
vl dx = {1, 0, -1, 0};
vl dy = {0, 1, 0, -1};
const ld PI = 3.14159265358979323846;
const ll N = 1e7 + 2;
const ll mod = 1e9 + 7;
const ll inf = 1e18;
#define lb lower_bound
#define ub upper_bound
#define maxi(v) *max_element(all(v))
#define mini(v) *min_element(all(v))
#define addition(v) accumulate(all(v), 0)
#define setbits(x) __builtin_popcountll(x)

/*********************Utility********************/
ll ceil_div(ll a, ll b) { return a % b == 0 ? a / b : (a / b) + 1; }
ll div_div(ll a, ll b) { return (a * b - 1) / (b - 1); }
ll digits(ll n) { return floor(log10(n) + 1); }
ll hcf(ll a, ll b) { return __gcd(a, b); }
ll lcm(ll a, ll b) { return (a * 1LL * b) / hcf(a, b); }
ll mod_add(ll a, ll b) {
    a = a % mod;
    b = b % mod;
    return (((a + b) % mod) + mod) % mod;
}
ll mod_mul(ll a, ll b) {
    a = a % mod;
    b = b % mod;
    return (((a * b) % mod) + mod) % mod;
}
ll inv(ll i) {
    if (i == 1) {
        return 1;
    }
    return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;
}
ll power(ll a, ll b) {
    a %= mod;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
bool isPerfectSquare(ll n) { return (ceil((ld)sqrt(n)) == floor((ld)sqrt(n))); }
bool sortBySecond(const pair<ll, ll> &a, const pair<ll, ll> &b) {
    return (a.second < b.second);
}

/*********************Optimized********************/
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

/*********************Helper********************/

/*********************Solve Code********************/
void ani() {
    // Add your code here
    ll n;
    cin >> n;
    // debug(n);

    vl a(n);
    cin >> a;
    fl(i, 1, n) {
        if (a[i] % a[0] != 0) {
            no;
            rt;
        }
    }
    ys;
}

/*********************Input-Output********************/
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void open() {
#ifdef EPSILON
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
}

/*********************main******************/
int main() {
    fast;
    open();

    ll tc = 1;
    cin >> tc;

    for (ll t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        ani();
    }

    rt 0;
}