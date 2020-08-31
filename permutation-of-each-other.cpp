#include <bits/stdc++.h>
using namespace std;

bool orderedMapApproach(string *s1, string *s2);
bool sortedStringApproach(string s1, string s2);

int main()
{
    string str1, str2;
    cin >> str1;
    cin >> str2;
    if (str1.length() == str2.length())
    {

        bool flag = orderedMapApproach(&str1, &str2);
        flag = sortedStringApproach(str1, str2);
        if (!flag)
            cout << "not permutation of each other" << endl;
        else
            cout << "permutation of each other" << endl;
    }
    else
        cout << "not permutation of each other" << endl;
}

bool orderedMapApproach(string *s1, string *s2)
{

    unordered_map<char, int> count_map;

    for (auto i : *s1)
    {
        if (count_map.find(i) != count_map.end())
            count_map[i]++;

        else
            count_map[i] = 1;
    }

    for (auto i : *s2)
    {
        if (count_map.find(i) != count_map.end())
        {
            count_map[i]--;
            if (count_map[i] < 0)
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    return true;
}

bool sortedStringApproach(string s1, string s2)
{
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    int j = 0;
    for (auto i : s1)
    {
        if (i != s2[j++])
            return false;
    }
    return true;
}