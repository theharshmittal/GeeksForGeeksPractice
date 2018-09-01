#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    {
        bool flag = true;
        string str;
        getline(cin, str);
        int i = 0, j = 0, k = 0;

        while(str[i]!='\0')
        {
            if(flag == true)
            {
                cout << "In true\n";
                while(str[i]!=' ')
                {
                    cout << str[i++];
                }
            flag = flag ^ false;
            }
            else
            {
                cout << "In false\n";
           //     i++;
                j = i;
                while(str[i]!=' ')
                    i++;
                k = i;
                while(k >= j)
                    cout << str[k--];

            flag = flag ^ false;
            }
           // i++;
 //           while((str[i] == ' ')&&(str[i]!= '\0'))
   //             i++;
     //       cout << " ";
        }
        cout << "\n";
    }
	return 0;
}
