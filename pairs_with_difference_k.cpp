#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i, j;
        cin >> n >> k;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        int total = 0;
        for(i = 0; i < n-1; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(abs(arr[i]-arr[j]) == k)
                    total++;
            }
        }

        cout << total << "\n";
    }
	return 0;
}
