#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    int len1 = str1.length(), len2 = str2.length();
    int abs_diff = abs(len1 - len2);
    if (abs_diff <= 1)
    {
        int no_of_edits = abs_diff, i = 0, j = 0;

        while ((i < len1) && (j < len2))
        {
            if (str1[i++] != str2[j++])
                no_of_edits++;
        }
        if (no_of_edits > 1)
            cout << str1 << " , " << str2 << " -> "
                 << "false" << endl;
        else
            cout << str1 << " , " << str2 << " -> "
                 << "true" << endl;
    }
    else
        cout << str1 << " , " << str2 << " -> "
             << "false" << endl;
}