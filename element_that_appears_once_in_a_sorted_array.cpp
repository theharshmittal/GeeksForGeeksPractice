#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, xoro = 0;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        for(i = 0; i < n; i++)
            xoro = xoro ^ arr[i];

        cout << xoro << "\n";
    }
    return 0;
}
