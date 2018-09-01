#include<bits/stdc++.h>

using namespace std;

bool fit(int* ar1, int* ar2, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(!(ar1[i] <= ar2[i]))
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int* ar1 = new int[n];
        int* ar2 = new int[n];

        for(i = 0; i < n; i++)
            cin >> ar1[i];

        for(i = 0; i < n; i++)
            cin >> ar2[i];

        sort(ar1, ar1 + n);
        sort(ar2, ar2 + n);

        if(fit(ar1, ar2, n))
            cout << "YES\n";
        else cout << "NO\n";

    }
	return 0;
}
