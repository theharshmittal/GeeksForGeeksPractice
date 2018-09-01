#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1 = "", s2 = "";
        cin >> s1;
        int i = 0, j = 0;

        char a = tolower(s1[i]);
        s2 = s2 + a;

        for(i = 1; i < s1.length(); i++)
        {
            if((s1[i] >= 97)&&(s1[i] <= 122))
                s2 = s2 + s1[i];

            else if((s1[i] >= 65)&&(s1[i] <= 90))
            {
                s2 = s2 + " ";
                char a = tolower(s1[i]);
                s2 = s2 + a;
            }
        }
        cout << s2 << "\n";
    }
	return 0;
}
