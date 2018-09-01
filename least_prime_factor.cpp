#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i = 1, j = 1;
        cin >> n;
        cout << "1 ";
        for(i = 2; i <=n; i++)
        {
            if(i%2 == 0)
                cout << 2 << " ";
            else
            {
                for(j = 2; j <= i; j++)
                    if(i%j == 0)
                        break;

                cout << j << " ";
            }
        }
        cout << "\n";
    }
	return 0;
}
