#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int i;
        string str;
        cin >> str;
        int* arr = new int[27];
        bool found = false;

        for(i = 0; i < 28; i++)
            arr[i] = 0;

        for(i = 0; i < str.length(); i++)
        {
            int el = str[i] - 97;
            arr[el]++;
        }

        for(i = 0; i < str.length(); i++)
        {
            int el = str[i] - 97;
            if(arr[el] > 1)
            {
                cout << str[i] << "\n";
                found = true;
                break;
            }
        }

        if(!found)
            cout << "-1\n";
    }
	return 0;
}
