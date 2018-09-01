#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        //logic here
        int a, b, counts = 0;
        cin >> a >> b;
        a = a ^ b;
        while(a)
        {
            a = a & (a-1);
            counts++;
        }
        cout << counts << "\n";
    }
	return 0;
}
