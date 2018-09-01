#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int num = 0;
        for(int i = l-1; i < r; i++)
            num = num + pow(2, i);
        n = n ^ num;
        cout << n << "\n";
    }
    return 0;
}
