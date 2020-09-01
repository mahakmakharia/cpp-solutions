/*Palindrome Permutation: Given a string, write a function to check if it is a permutation of a palindrome. 
A palindrome is a word or phrase that is the same forwards and backwards. A permutation
is a rearrangement of letters. The palindrome does not need to be limited to just dictionary words.  

Approach: a palindrome has even number of each characters if the length is even and one odd character if the length is odd

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    getline(cin, s);
    int len = s.length(), count_even = 0, count_odd = 0;
    unordered_map<char, int> char_count;
    for (char i : s)
    {
        if (char_count.find(i) == char_count.end())
            char_count[i] = 1;
        else
        {
            ++char_count[i];
        }
    }

    for (auto i : char_count)
    {
        if (i.second % 2 == 0)
            count_even++;
        else
        {
            count_odd++;
        }
    }

    if (len % 2 == 0 && count_odd == 0)
        cout << "true";
    else if (len % 2 != 0 && count_odd == 1)
        cout << "true";
    else
    {
        cout << "false";
    }

    return 0;
}
