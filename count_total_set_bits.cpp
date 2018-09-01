#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, counts = 0, sum = 0;
        cin >> n;
        for(i = 1; i <= n; i++)
        {
            int num = i;
            counts = 0;
            while(num)
            {
                num = num & (num-1);
                counts++;
            }
            sum = sum + counts;
        }

        cout << sum << "\n";
    }
	return 0;
}
