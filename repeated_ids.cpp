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

        int* ids = new int[10];

        for(i = 0; i < 10; i++)
        {
            ids[i] = 0;
        }

        for(i = 0; i < n; i++)
        {
            ids[arr[i]]++;
        }

        for(i = 0; i < n; i++)
        {
            if(ids[arr[i]] >= 1)
            {
                cout << arr[i] << " ";
                ids[arr[i]] = 0;
            }
        }

        cout << "\n";
    }
	return 0;
}
