#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, counts = 0;
        cin >> n;

        while(n%2==0)
        {
            if(n == 0)
                break;
            n = n/2;
            counts++;
        }
        if(n == 0)
            cout << 0 << "\n";
        else
            cout << counts + 1 << "\n";
    }
    return 0;
}
