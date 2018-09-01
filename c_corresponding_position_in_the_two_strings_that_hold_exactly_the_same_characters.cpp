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
        transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
        transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
        int total = 0, i = 0;
        while(str1[i]!='\0')
        {
            if(str1[i] == str2[i])
                total++;
            i++;
        }

        cout << total << "\n";
    }
	return 0;
}
