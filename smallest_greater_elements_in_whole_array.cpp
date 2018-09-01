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
        int* arr2 = new int[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            arr2[i] = arr[i];
        }

        sort(arr2, arr2 + n, greater<int>());

        for(i = 0; i < n; i++)
            if(arr[i] == arr2[0])
                arr[i] = -100;

        for(i = 1; i < n; i++)
        {
            int ele = arr2[i];
            for(int j = 0; j < n; j++)
            {
                if(ele == arr[j])
                    arr[j] = arr2[i-1];
            }
        }

        for(i = 0; i < n; i++)
        {
            if(arr[i] == -100)
                cout << "_ ";
            else cout << arr[i] << " ";
        }
        cout << "\n";
    }
	return 0;
}
