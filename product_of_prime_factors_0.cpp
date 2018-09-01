#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long prod = 1;
        int n;
        cin >> n;
        while(n%2 == 0)
        {

        }
        for(int i = 2; i < sqrt(n); i++)
        {
            if(n%i == 0)
            {
                prod = prod * i;
            }
        }
        cout << prod << "\n";
    }
	return 0;
}
