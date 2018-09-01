#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin, str);
        int i = 0, max_len = 0, curr_len = 0;
        while(str[i]!='\0')
        {
            if(str[i]!= ' ')
                curr_len++;

            if(curr_len > max_len)
            {
                max_len = curr_len;
            }

            if(str[i] == ' ')
                curr_len = 0;
            i++;
        }

        cout << max_len << "\n";
    }
	return 0;
}
