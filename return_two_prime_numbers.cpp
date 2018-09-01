#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        bool* prime = new bool[n+1];

        memset(prime, true, n+1);

        for(i = 2; i*i <= n; i++)
        {
            if(prime[i] == true)
            {
                for(int j = 2*i; j <=n; j+=i)
                    prime[j] = false;
            }
        }

        int a = 1, b = 1;
        for(i = 2; i < n-1 ; i++)
        {
            if(prime[i])
            {
                a = i;
                if(prime[n-i] == true)
                {
                    b = n-i;
                    break;
                }
            }
        }

        cout << a << " " << b << "\n";
    }
	return 0;
}
