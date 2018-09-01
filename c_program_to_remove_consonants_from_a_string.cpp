#include<bits/stdc++.h>

using namespace std;

bool is_vowel(char a)
{
    if((a == 'a')||(a == 'A')||(a == 'e')||(a == 'E')||(a == 'i')||(a == 'I')||(a == 'o')||(a == 'O')||(a == 'u')||(a == 'U'))
        return true;
    else return false;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        bool flag = false;
        string str;
        getline(cin, str);
        int i = 0;
        while(str[i]!='\0')
        {
            if(is_vowel(str[i]))
            {
                cout << str[i];
                flag = true;
            }
            else if(str[i] == ' ')
                cout << " ";
            i++;
        }

        if(flag == false)
            cout << "No Vowel";
        cout << "\n";
    }
	return 0;
}
