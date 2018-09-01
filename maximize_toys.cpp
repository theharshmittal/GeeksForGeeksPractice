#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i, sum = 0, items = 0;
        cin >> n;
        int* arr = new int[n];
        cin >> k;

        for(i = 0; i<n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        for(i = 0; i < n; i++)
        {
            sum = sum + arr[i];
            if(sum>k)
                break;
            items++;
        }
        cout << items << "\n";
    }

    return 0;
}
