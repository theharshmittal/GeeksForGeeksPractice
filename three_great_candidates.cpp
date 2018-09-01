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

        sort(arr, arr + n, greater<int>());

        if((arr[0]*arr[1]*arr[2])>(arr[0]*arr[n-1]*arr[n-2]))
            cout << arr[0]*arr[1]*arr[2] << "\n";

        else cout << arr[0] * arr[n-1] * arr[n-2] << "\n";
    }
	return 0;
}
