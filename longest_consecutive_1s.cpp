#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, counts = 0;
        cin >> n;
        while(n)
        {
            int temp = 0;
            if(n%2 == 0)
                n = n/2;
            while(n%2 == 1)
            {
                temp++;
                n = n/2;
            }
            if(temp > counts)
                counts = temp;
        }
        cout << counts << "\n";
    }
	return 0;
}
