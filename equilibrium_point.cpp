#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, sumLeft = 0, sumRight = 0, flag = 0;
        cin >> n;
        int* arr = new int[n];

        for(i = 0; i<n; i++)
            cin >> arr[i];

        if(n == 1)
        {
            cout << 1 << "\n";
        }

        else if(n == 2)
        {
            cout << -1 << "\n";
        }

        else
        {
            for(i = 1; i<n-1; i++)
            {
                sumLeft = sumRight = 0;
                for(j = 0; j<=i-1; j++)
                    sumLeft = sumLeft + arr[j];
                for(j = i+1; j<n; j++)
                    sumRight = sumRight + arr[j];

                if(sumLeft == sumRight)
                {
                    cout << i+1 << "\n";
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout << -1 << "\n";
        }
    }
    return 0;
}

//5154653509
