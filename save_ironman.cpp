#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        int i;
        string s1 = " ", s2 = " ";
        getline(cin, s1);
        for(i = 0; i < s1.length(); i++)
        {
            if(((s1[i]>=65)&&(s1[i]<=90))||((s1[i]>=97)&&(s1[i]<=122))||((s1[i]>=48)&&(s1[i]<=57)))
                s2+=s1[i];
        }
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
 //       cout << "String: " << s2 << "\n";
        i = 0;
        int j = s2.length() - 1;
        bool flag = false;
        while(i <= j)
        {
            if(s2[i]!=s2[j])
            {
                flag = true;
                break;
            }
            i++;
            j--;
        }
        if(flag == false) cout << "YES\n";
        else cout << "NO\n";
    }
	return 0;
}
