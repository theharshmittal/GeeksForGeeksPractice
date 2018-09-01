#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i, j, max;
        cin >> n;
        int* arr = new int[n];
        cin >> k;
        int times = k;

        for(i = 0; i<n; i++)
            cin >> arr[i];

        for(i = 0; i<n-k+1; i++)
        {
            max = arr[i];
            for(j = i; j<i+k; j++)
            {
                if(arr[j] > max)
                    max = arr[j];
            }
            cout << max << " ";
        }
        cout << "\n";
    }
}
