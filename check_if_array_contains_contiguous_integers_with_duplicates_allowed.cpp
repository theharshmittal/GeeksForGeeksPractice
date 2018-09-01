#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool flag = false;
        int n, i;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr + n);

        for(i = 0; i < n-1; i++)
        {
            if((arr[i] == arr[i+1])||(arr[i] == arr[i+1]-1))
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }

        if(flag == true)
            cout << "Yes\n";
        else cout << "No\n";
    }
	return 0;
}
