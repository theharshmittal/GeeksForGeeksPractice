#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int res = pow(2, k);
        n = n & res;
        if(n == 0)
            cout << "No" << "\n";
        else cout << "Yes" << "\n";
    }
    return 0;
}
