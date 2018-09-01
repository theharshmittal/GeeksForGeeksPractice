#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long n;
        cin >> n;
        int withdrawls = 0, divisor = 1;
        while(n)
        {
            for(int i = n/2; i >= 1; i--)
            {
                if(n % i == 0)
                {
                    divisor = i;
                    break;
                }
            }
            n = n - divisor;
            withdrawls++;
        }

        cout << withdrawls << "\n";
    }
    return 0;
}
