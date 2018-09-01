#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        bool flag = true;
        string str;
        cin >> str;
        int i = 0;
        int* count_arr = new int[26]{0};
        for(i = 0; i < str.length(); i++)
        {
            count_arr[str[i] - 'a']++;
        }

        for(i = 0; i < 26; i++)
        {
            if(count_arr[i] > 1)
            {
                flag = false;
                break;
            }
        }

        if(flag == true)
            cout << 1 << "\n";
        else cout << 0 << "\n";
    }
	return 0;
}
