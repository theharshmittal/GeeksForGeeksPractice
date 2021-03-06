#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, i;
        cin >> m >> n;
        bool* prime = new bool[n+1];
        memset(prime, true, n+1);
        for(i = 2; i*i <= n; i++)
        {
            if(prime[i] == true)
            {
                for(int j = 2*i; j<=n; j+=i)
                    prime[j] = false;
            }
        }
        prime[1] = false;

        for(i = m; i <= n; i++)
            if(prime[i])
                cout << i << " ";
        cout << "\n";
    }
	return 0;
}

