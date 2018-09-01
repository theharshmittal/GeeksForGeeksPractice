#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;
        cout << ((n-1)*10)-((n-1)*x) << "\n";
    }
	return 0;
}
