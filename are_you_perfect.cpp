#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long n, res = 0, req = 0;
        cin >> n;
        double ceil_val = ceil(sqrt(n));
        double floor_val = floor(sqrt(n));
        if((ceil_val-sqrt(n)) > (sqrt(n)- floor_val))
            req = floor_val;
        else req = ceil_val;
        if(n > (req*req)) res =  n - (req*req);
        else res = (req * req) - n;
        cout << req * req << " " << res << "\n";
    }
    return 0;
}
