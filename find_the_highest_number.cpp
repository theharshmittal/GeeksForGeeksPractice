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

        i = 1;
        while(arr[i] >= arr[i-1])
        {
            i++;
        }
        cout << arr[i-1] << "\n";
    }
	return 0;
}
