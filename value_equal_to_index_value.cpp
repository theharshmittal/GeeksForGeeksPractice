#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool found = false;
        int n, i;
        cin >> n;
        int* arr = new int[n+1];
        for(i = 1; i <= n; i++)
            cin >> arr[i];

        for(i = 1; i <= n; i++)
        {
            if(arr[i] == i)
            {
                found = true;
                cout << arr[i] << " ";
            }
        }

        if(found == false) cout << "Not Found\n";
        else cout << "\n";

    }
	return 0;
}
