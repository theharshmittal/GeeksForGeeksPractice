#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        unsigned long long first = 1, second = 2, third = 5;
        for(int i = 1; i <= n; i++)
        {
            cout << first << " ";
            unsigned long long sum = first + second + third;
            first = second;
            second = third;
            third = sum;
        }
        cout << "\n";
    }
	return 0;
}
