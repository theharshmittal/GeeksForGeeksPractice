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
        int temp = pow(2, k);
        temp = n | temp;
        cout << temp << "\n";
    }
    return 0;
}
