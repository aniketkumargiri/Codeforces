#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int X = 0;
    string s;

    while (n--)
    {
        cin >> s;
        if (s == "++X" || s == "X++")
            X++;
        else
            X--;
    }

    cout << X--;

    return 0;
}