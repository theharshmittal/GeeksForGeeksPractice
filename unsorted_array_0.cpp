#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, flag = 0;
        cin >> n;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        for(i = 1; i < n-1; i++)
        {
            flag = 1;
            for(j = 0; j < i; j++)
            {
                if(arr[j] > arr[i])
                {
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
            {
                for(j = i+1; j < n; j++)
                {
                    if(arr[j] < arr[i])
                    {
                        flag = 0;
                        break;
                    }
                }
            }
            if(flag == 1)
            {
                cout << arr[i] << "\n";
                break;
            }
        }
        if(flag == 0)
            cout << -1 << "\n";
    }
    return 0;
}
