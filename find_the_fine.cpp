#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, date, i;
        cin >> n >> date;
        int* car_num = new int[n];
        int* penalty = new int[n];
        long fine = 0;

        for(i = 0; i < n; i++)
            cin >> car_num[i];
        for(i = 0; i < n; i++)
            cin >> penalty[i];

        if(date%2==0)
        {
            for(i = 0; i < n; i++)
            {
                if(car_num[i]%2!=0)
                {
                    fine+=penalty[i];
                }
            }
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                if(car_num[i]%2==0)
                    fine+=penalty[i];
            }
        }
        cout << fine << "\n";
    }
	return 0;
}
