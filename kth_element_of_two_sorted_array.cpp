#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m, a;
        cin >> n >> m >> a;
        int* ar1 = new int[n];
        int* ar2 = new int[m];
        int* merged = new int[n+m];
        int i = 0, j = 0, k = 0;

        for(i = 0; i < n; i++)
            cin >> ar1[i];
        for(j = 0; j < m; j++)
            cin >> ar2[j];

        i = j = 0;

        while((i < n)&&(j < m))
        {
            if(ar1[i] < ar2[j])
            {
                merged[k] = ar1[i];
                k++; i++;
            }
            else
            {
                merged[k] = ar2[j];
                k++; j++;
            }
        }

        while(i < n)
        {
            merged[k] = ar1[i];
            k++; i++;
        }

        while(j < m)
        {
            merged[k] = ar2[j];
            k++; j++;
        }

        cout << "\n" << merged[a-1] << "\n";
    }
	return 0;
}
