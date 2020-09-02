/* String Compression: Implement a method to perform basic string compression using the counts
of repeated characters. For example, the string aabcccccaaa would become a2blc5a3. If the
"compressed" string would not become smaller than the original string, your method should return
the original string. You can assume the string has only uppercase and lowercase letters (a - z).  */

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