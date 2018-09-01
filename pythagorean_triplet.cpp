#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, i, j, k, flag = 0;
        cin >> n;
        int* sqr = new int[n];
        for(i = 0; i < n; i++)
            cin >> sqr[i];


        for(i = 0; i < n; i++)
            sqr[i] = sqr[i] * sqr[i];

        for(i = 0; i < n-2; i++)
        {
            for(j = i+1; j < n-1; j++)
            {
                for(k = j+1; k<n; k++)
                    if((sqr[k] == sqr[j] + sqr[i])||(sqr[i] == sqr[j] + sqr[k])||(sqr[j] == sqr[i] + sqr[k]))
                    {
                        flag = 1;
                        break;
                    }
                if(flag == 1)
                    break;
            }
            if(flag == 1)
                break;
        }
        if(flag == 1)
            cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
    return 0;
}
