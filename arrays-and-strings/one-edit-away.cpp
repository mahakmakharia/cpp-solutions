/*One Away: There are three types of edits that can be performed on strings: insert a character,
remove a character, or replace a character. Given two strings, write a function to check if they are
one edit (or zero edits) away.
EXAMPLE
pale, ple -> true
pales, pale -> true
pale, bale -> true
pale, bake -> false */

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