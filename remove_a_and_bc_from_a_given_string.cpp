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
        int i;
        for(i = 0; i < str.length()-1; i++)
        {
            if(str[i] == 'b')
                str[i] = -1;
            if((str[i] == 'a')&&(str[i+1] == 'c'))
                str[i] = str[i+1] = -1;
        }
        if(str[str.length()-1] == 'b')
            str[str.length()-1] = -1;

        for(i = 0; i < str.length(); i++)
        {
            if(!(str[i] == -1))
                cout << str[i];
        }

        cout << "\n";
    }
	return 0;
}
