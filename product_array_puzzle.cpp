#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        unsigned long long product = 1;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            product = product * arr[i];
        }

        for(i = 0; i < n; i++)
        {
            cout << product/arr[i] << " ";
        }

        cout << "\n";
    }
	return 0;
}
