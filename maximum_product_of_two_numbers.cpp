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

        int max1 = arr[0], max_index = 0;
        for(i = 1; i < n; i++)
        {
            if(arr[i] > max1)
            {
                max_index = i;
                max1 = arr[i];
            }
        }

        arr[max_index] = -1;

        int max2 = arr[0];
        for(i = 1; i < n; i++)
        {
            if(arr[i] > max2)
                max2 = arr[i];
        }

        cout << max1*max2 << "\n";
    }
	return 0;
}
