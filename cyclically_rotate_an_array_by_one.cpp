#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        int* arr = new int[n];

        for(i = 0; i < n; i++)
            cin >> arr[i];

        cout << arr[n-1] << " ";

        for(i = 0; i < n-1; i++)
            cout << arr[i] << " ";
        cout << "\n";

    }
	return 0;
}
