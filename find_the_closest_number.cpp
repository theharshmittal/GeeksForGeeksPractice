#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i, n, k, diff, my_num;
        cin >> n >> k;
        int* arr = new int[n];
        for(i = 0; i < n; i++)
            cin >> arr[i];
        diff = abs(arr[0] - k);

        for(i = 0; i < n; i++)
        {
            int temp = abs(arr[i] - k);
            if(diff >= temp)
            {
                diff = temp;
                my_num = arr[i];
            }
        }

        cout << my_num << "\n";
    }
	return 0;
}
