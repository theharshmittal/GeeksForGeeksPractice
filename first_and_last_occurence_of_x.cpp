#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, i;
        cin >> n >> x;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];
        int first = -1, last = -1;
        i = 0;

        while((arr[i]!= x)&&(i < n))
        {
            i++;
        }

        if(arr[i] == x)
            first = i;

        for(i; i < n; i++)
        {
            if(arr[i] == x)
                last = i;
        }

        if(first == -1)
            cout << -1 << "\n";
        else cout << first << " " << last << "\n";
    }
	return 0;
}
