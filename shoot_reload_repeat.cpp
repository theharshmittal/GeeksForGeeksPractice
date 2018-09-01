#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string activity;
        cin >> activity;
        int capacity;
        cin >> capacity;
        int i = 0;
        int curr = capacity;
        bool flag = true;
        while(activity[i]!='\0')
        {
            if(activity[i] == 'S')
            {
                curr--;
            }
            else if(activity[i] == 'R')
            {
                curr = capacity;
            }
            if(curr < 0)
            {
                flag = false;
                break;
            }
            i++;
        }

        if(flag)
            cout << 1;
        else cout << 0;
        cout << "\n";
    }
	return 0;
}
