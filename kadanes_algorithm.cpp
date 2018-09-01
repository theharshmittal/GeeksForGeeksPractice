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

        int max_so_far = arr[0], max_here = arr[0];
        for(i = 1; i < n; i++)
        {
            max_here = max(arr[i], max_here+arr[i]);
            max_so_far = max(max_here, max_so_far);
        }

        cout << max_so_far << "\n";
    }
    return 0;
}
