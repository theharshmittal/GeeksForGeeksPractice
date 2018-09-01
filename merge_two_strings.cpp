#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        string c = "";
        int i = 0, j = 0;
        bool toggle = true;
        while((i < a.length())&&(j < b.length()))
        {
            if(toggle)
            {
                c = c + a[i];
                i++;
            }
            else
            {
                c = c + b[j];
                j++;
            }
            toggle = toggle^true;
        }

        while(i < a.length())
        {
            c = c + a[i];
            i++;
        }

        while(j < b.length())
        {
            c = c + b[j];
            j++;
        }

        cout << c << "\n";
    }

    return 0;
}
