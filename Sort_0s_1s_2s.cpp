#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j = 0, count0 = 0, count1 = 0, count2 = 0;
        cin >> n;
        int* arr = new int[n];

        for(i = 0; i < n; i++)
            cin >> arr[i];

        for(i = 0; i < n; i++)
        {
             if(arr[i] == 0)
                count0++;
             else if(arr[i] == 1)
                count1++;
             else count2++;
        }

        for(i = 0; i<count0; i++)
            arr[j++] = 0;

        for(i = 0; i<count1; i++)
            arr[j++] = 1;

        for(i = 0; i<count2; i++)
            arr[j++] = 2;

        for(i = 0; i<n; i++)
            cout << arr[i] << " ";
        cout << "\n";
    }
    return 0;
}
