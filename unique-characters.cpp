#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    unordered_map<char, int> count_map;
    bool flag = false;

    for (auto i : s)
    {
        if (count_map.find(i) == count_map.end())
            count_map[i] = 1;
        else
        {
            flag = true;
            break;
        }
    }
    if (flag)
        cout << "repititive characters";
    else
        cout << "unique characters";
    return 0;
}