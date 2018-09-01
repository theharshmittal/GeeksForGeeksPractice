#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        int* odd = new int[n];
        int* even = new int[n];

        int odd_count = 0, even_count = 0;

        for(i = 0; i < n; i++)
        {
            if(arr[i] % 2 != 0)
            {
                odd[odd_count] = arr[i];
                odd_count++;
            }

            else
            {
                even[even_count] = arr[i];
                even_count++;
            }
        }

        sort(odd, odd+odd_count, greater<int>());
        sort(even, even+even_count);

        for(i = 0; i < odd_count; i++)
            cout << odd[i] << " ";
        for(i = 0; i < even_count; i++)
            cout << even[i] << " ";

        cout << "\n";
    }
	return 0;
}
