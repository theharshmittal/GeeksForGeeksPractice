#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, xorc = 0, xorn = 0;
        cin >> n;
        int* c = new int[n-1];
        for(i = 0; i<n-1; i++)
            cin >> c[i];

        for(i = 1; i <= n; i++)
            xorn = xorn^i;

        for(i = 0; i<n-1; i++)
            xorn = xorn^c[i];

        cout << xorn << endl;
    }

    return 0;
}
