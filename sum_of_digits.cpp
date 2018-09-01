#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, sum = 0;
        cin >> n;
        while(n)
        {
            int digit = n%10;
            sum += digit;
            n = n/10;
        }
        cout << sum << "\n";
    }
	return 0;
}
