/*
String Rotation: Assume you have a method i 5Su b 5 tr ing which checks if one word is a substring
of another. Given two strings, 51 and 52, write code to check if 52 is a rotation of 51 using only one
call to i5Sub5tring (e.g., "waterbottle" is a rotation of"erbottlewat"). 

Approach: 51 = xy = waterbottle
x = wat
y = erbottle
s2 = yx = erbottlewat
So, we need to check if there's a way to split s1 into x and y such that xy = s1 and yx = s2. Regardless of
where the division between x and y is, we can see thatyx will always be a substring of xyxy.That is, s2 will
always be a substring of s1s1. 
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s2.length() != s1.length() && s2.length() == 0)
        cout << "false";
    else
    {

        string s1s1 = s1 + s1;
        if (s1s1.find(s2))
            cout << "true";
        else
        {
            cout << "false";
        }
    }

    return 0;
}