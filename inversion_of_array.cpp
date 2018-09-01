#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, total = 0;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        for(i = 0; i < n-1; i++)
        {
            int element = arr[i];
            for(j = i + 1; j < n; j++)
            {
                if(arr[j] < arr[i])
                    total++;
            }
        }
        cout << total << "\n";
    }
	return 0;
}
