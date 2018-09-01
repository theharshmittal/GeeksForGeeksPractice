#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, prod = 2;
        cin >> n;
        unsigned long long res = 0;
        while(n--)
        {
            res = res + (prod*prod);
            prod += 2;
        }

        cout << res << "\n";
    }
	return 0;
}
