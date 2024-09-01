#include <bits/stdc++.h>
using namespace std;

string palen(string str, int f, int l)
{
    if (f >= l)
        return "true";
    if (str[f] != str[l])
    {
        return "false";
    }
    return palen(str, f + 1, l - 1);
}

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    string ans = palen(str, 0, len);
    cout << ans;
}