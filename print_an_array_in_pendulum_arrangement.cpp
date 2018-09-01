#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j = 1;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        int* a = new int[n];
        int c = 0, flag = 0;

        sort(arr, arr+n);

        c = (n-1)/2;

        a[c] = arr[0];

        for(i = 1; i <= c; i++)
        {
            a[c+i] = arr[j++];
            a[c-i] = arr[j++];
        }

        if(n%2 == 0)
            a[c+i] = arr[j];

        for(i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << "\n";
    }
	return 0;
}
