#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, diff;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        int diff = (arr[0] - arr[1]);
        for(i = 1; i < n - 1; i++)
        {
            int temp = abs(arr[i] - arr[i+1]);
            if(diff >= temp)
                diff = temp;
        }

        cout << diff << "\n";
    }
	return 0;
}
