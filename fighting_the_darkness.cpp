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

        int maximum = arr[0];
        for(i = 1; i < n; i++)
        {
            if(arr[i] > maximum)
                maximum = arr[i];
        }

        cout << maximum << "\n";
    }
	return 0;
}
