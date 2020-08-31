#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == 0)
            {
                for (int k = 0; k < n; i++)
                {
                    arr[i][k] = 0;
                    arr[j][k] = 0;
                }

                break;
            }
        }
    }
    return 0;
}
