
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str = "";
        cin >> str;
        int total = 0, i, j;
        for(i = 0; i < str.length()-1; i++)
        {
            if(str[i] == '1')
            {
                for(j = i+1; j < str.length(); j++)
                {
                    if(str[j] == '1')
                        total++;
                }
            }
        }

        cout << total << "\n";
    }
	return 0;
}
