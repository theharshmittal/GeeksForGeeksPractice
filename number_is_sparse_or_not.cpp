#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, flag = 0, counts = 0;
        cin >> n;
        while(n)
        {
            counts = 0;

            while(n%2 == 0)
                n = n/2;

            while(n%2 == 1)
            {
                n = n/2;
                counts++;
            }

            if(counts > 1)
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "0\n";
        else cout << "1\n";
    }
	return 0;
}
