#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, n;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        for(i = 0; i < n-1; i++)
        {
            if(arr[i] > arr[i+1])
                cout << arr[i+1] << " ";
            else cout << -1 << " ";
        }

        cout << "-1\n";
    }
	return 0;
}
