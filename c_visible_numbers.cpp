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

        int total[101] = {0};

        for(i = 0; i < n; i++)
            total[arr[i]]++;

        for(i = 0; i < 101; i++)
        {
            if(total[i] > n/3)
            {
                flag = true;
                cout << i << " ";
            }
        }

        if(flag == false)
            cout << "-1";
        cout << "\n";
    }
	return 0;
}
