#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a = " ";
        cin >> a;
        int i = 0, index = -1;

        for(i = 0; i < a.length(); i++)
        {
            if(a[i] == '1')
            {
                index = i;
            }
        }

        if(index == -1)
            cout << -1 << "\n";
        else cout << index << "\n";
    }
	return 0;
}
