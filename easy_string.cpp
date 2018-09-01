#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int i = 0;
        transform(str.begin(), str.end(), str.begin(),::tolower);
        string res = "";
        while(i < str.length())
        {
            int total = 0;
            char a = str[i];
            while(a == str[i])
            {
                total++;
                i++;
            }
            res = res + to_string(total);
            res = res + a;
        }

        cout << res << "\n";
    }
	return 0;
}
