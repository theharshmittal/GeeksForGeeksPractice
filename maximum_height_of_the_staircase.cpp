#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        int total = 0, i = 1;
        while(total>=0)
        {
            num = num-i;
            if(num < 0)
                break;
            i++;
            total++;
        }
        cout << total << "\n";
    }

    return 0;
}
