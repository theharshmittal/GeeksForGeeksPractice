#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, d, i;
        cin >> n >> d;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        while(d--)
        {
            int temp = arr[0];
            for(i = 0; i < n-1; i++)
                arr[i] = arr[i+1];
            arr[n-1] = temp;
        }

        for(i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
	return 0;
}
