#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, counts = 0;
        cin >> m >> n;
        if(m == n)
        {
            cout << -1;
        }
        else
        {
            while(m%2 == n%2)
            {
                m = m/2;
                n = n/2;
                counts++;
            }
            cout << counts + 1 << "\n";
        }
    }
    return 0;
}
