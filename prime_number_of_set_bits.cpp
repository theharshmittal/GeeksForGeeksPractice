#include<bits/stdc++.h>

using namespace std;

bool is_prime(int n)
{
    if(n == 1)
        return false;
    bool res = true;
    for(int i = 2; i*i <= n; i++)
        if(n%i==0)
        {
            res = false;
            break;
        }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        int total = 0;

        while(l <= r)
        {
            int bits = 0;
            int curr = l;
            while(curr)
            {
                if(curr%2==1)
                    bits++;
                curr=curr/2;
            }
   //         cout << "\nNumber is : " << l << " And number of bits are: " << bits << "\n";
            if(is_prime(bits))
                total++;
            l++;
        }

        cout << total << "\n";
    }
	return 0;
}
