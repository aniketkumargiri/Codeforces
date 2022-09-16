#include <bits/stdc++.h>
using namespace std;

bool isDistinct(int num)
{
    int cnt1 = 0;
    int temp = num;

    while (num)
    {
        cnt1++;
        num /= 10;
    }

    set<int> s;
    while (temp)
    {
        int r = temp % 10;
        s.insert(r);
        temp /= 10;
    }

    if (cnt1 == s.size())
        return true;
        
    return false;
}

int main()
{
    int y;
    cin >> y;

    while (!isDistinct(y + 1))
    {
        y++;
    }
    cout << (y + 1) << endl;

    return 0;
}