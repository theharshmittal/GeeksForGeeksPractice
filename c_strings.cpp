#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if(str1.length() > str2.length())
            cout << str1.length();
        else cout << str2.length();
        cout << "\n";

        cout << str1 << str2 << "\n";
    }
	return 0;
}
