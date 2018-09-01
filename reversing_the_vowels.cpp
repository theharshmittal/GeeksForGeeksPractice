#include<bits/stdc++.h>

using namespace std;

bool is_vowel(char a)
{
    if((a == 'a')||(a == 'e')||(a == 'i')||(a == 'o')||(a == 'u'))
        return true;
    else return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string a;
        cin >> a;
        int i = 0, j = a.length()-1;
        while(i < j)
        {
            if(is_vowel(a[i]))
            {
                if(is_vowel(a[j]))
                {
                    swap(a[i++], a[j--]);
                }
                else j--;
            }
            else i++;
        }
        cout << a << "\n";
    }
	return 0;
}
