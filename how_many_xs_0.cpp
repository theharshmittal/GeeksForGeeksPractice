#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, l, u, counts = 0;
        cin >> x >> l >> u;
        for(int i = l+1; i < u; i++)
        {
            int num = i;
            while(num)
            {
                if(num%10 == x)
                    counts++;
                num = num/10;
            }
        }
        cout << counts << "\n";
    }
	return 0;
}
