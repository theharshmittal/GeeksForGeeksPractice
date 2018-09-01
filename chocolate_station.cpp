#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, cost = 1, i;
        cin >> n;
        int* a = new int[n];
        for(i = 0; i < n; i++)
            cin >> a[i];
        cin >> cost;

        int total = 0, avail = 0;

        if((a[0] - avail) >= 0)
            total = total + a[0];
        else avail = avail + a[0];
        for(i = 1; i < n; i++)
        {
            int diff = a[i] - a[i-1];
            if(diff > 0)
            {
                if(diff <= avail)
                {
                    avail = avail - diff;
                }
                else
                {
                    diff = diff - avail;
                    avail = 0;
                    total = total + diff;
                }
            }
            else
            {
                avail = avail - diff;
            }
        }

        cout << total * cost << "\n";
    }
    return 0;
}
