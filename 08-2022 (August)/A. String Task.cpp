/*
Author: Aniket Kumar Giri
*/
#include <bits/stdc++.h>
using namespace std;
/***************templete********************/
#define ll long long int
#define fl(i, a, n) for (ll i = a; i < n; i++)
#define vl vector<ll>
#define vvl vector<vector<ll>>
#define vpl vector<pair<ll, ll>>
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ff first
#define ss second
#define sz(x) ((ll)x.size())
#define nl "\n";
#define sp " "
const ll MOD = 1e9 + 7;

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
    string s;
    cin >> s;

    string str = "";
    fl(i, 0, s.length()) {
        if (!(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' ||
              s[i] == 'U' || s[i] == 'Y' || s[i] == 'a' || s[i] == 'e' ||
              s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y')) {
            s[i] = tolower(s[i]);
            str.pb('.');
            str += s[i];
        }
    }

    cout << str;
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