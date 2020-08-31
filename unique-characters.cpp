#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    char char_array[s.length() + 1];
    unordered_map<char, int> count_map;
    bool flag = false;
    strcpy(char_array, s.c_str());
    for (auto i : char_array)
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