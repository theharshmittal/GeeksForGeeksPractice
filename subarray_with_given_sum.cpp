#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, k;
        cin >> n >> k;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];

        int start = 0, curr_sum = arr[0], flag = 0;
        for(i = 1; i <= n; i++)
        {
            while(curr_sum > k && start < i-1)
            {
                curr_sum = curr_sum - arr[start];
                start++;
            }

            if(curr_sum == k)
            {
                flag = 1;
                break;
            }

            if(i < n)
                curr_sum += arr[i];
        }

        if(flag == 1)
            cout << start + 1 << " " << i<< "\n";

        else cout << -1 << "\n";
    }
    return 0;
}
