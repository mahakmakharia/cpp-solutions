#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, compressed_string = "";
    cin >> s;
    int c = 1, len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (i < len - 1 && s[i] == s[i + 1])
            c++;
        else
        {
            compressed_string = compressed_string + s[i] + to_string(c);
            c = 1;
        }
    }

    if (compressed_string.length() > len)
        cout << s;
    else
    {
        cout << compressed_string;
    }

    cout << endl;
    return 0;
}