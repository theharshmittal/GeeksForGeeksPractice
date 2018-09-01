#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,printing = 1, total_printed = 1, value = 1, counts = 1, i;
        cin >> n;
        cout << 1 << " ";
        while(total_printed < n)
        {
            counts++;
            if(printing == 1)
            {
                i = 1;
                value++;
                cout << value << " ";
                total_printed++;
                while((i < counts)&&(total_printed < n))
                {
                    value+=2;
                    total_printed++;
                    i++;
                    cout << value << " ";
                }
                printing = 0;
            }

           else if(printing == 0)
            {
                i = 1;
                value++;
                cout << value << " ";
                total_printed++;
                while((i < counts)&&(total_printed < n))
                {
                    value+=2;
                    total_printed++;
                    i++;
                    cout << value << " ";
                }
                printing = 1;
            }
        }
        cout << "\n";
    }
    return 0;
}
