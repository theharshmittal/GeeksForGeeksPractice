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

        int zero_count = 0;
        for(i = 0; i < n; i++)
        {
            if(arr[i] == 0)
                zero_count++;

            else cout << arr[i] << " ";
        }

        for(i = 0; i < zero_count; i++)
            cout << 0 << " ";
        cout << "\n";
    }
	return 0;
}
