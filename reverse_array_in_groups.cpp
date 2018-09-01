#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, i;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];
        cin >> k;

        for(i = 0; i < n; i = i+k)
        {
            int left = i;
            int right = min(i + k -1, n - 1);
            while(left < right)
                swap(arr[left++], arr[right--]);
        }

        for(i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
	return 0;
}
