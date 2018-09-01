#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, flag = 0, leader_count = 0;
        cin >> n;
        int* arr = new int[n];
        int* leader = new int[n];

        for(i = 0; i<n; i++)
            cin >> arr[i];

        for(i = 0; i<n-1; i++)
        {
            flag = 0;
            for(j = i+1; j<n; j++)
            {
                if(arr[j]>arr[i])
                    flag = -1;
            }
            if(flag == 0)
                leader[leader_count++] = arr[i];
        }

        leader[leader_count] = arr[n-1];

        for(i = 0; i <= leader_count; i++)
            cout << leader[i] << " ";
        cout << "\n";
    }
}
