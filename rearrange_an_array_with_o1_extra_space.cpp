#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int* arr = new int[n];
        for(int i = 0; i < n; i++)
            cin >> arr[i];

        for(int i = 0; i < n; i++)
            cout << arr[arr[i]] << " ";
        cout << "\n";

    }
	return 0;
}
