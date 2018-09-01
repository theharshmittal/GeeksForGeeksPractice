#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        unsigned long long num;
        char xors = '0';
        cin >> num;
        string str = to_string(num);
        cout << str << endl;
        string binary = "";
        binary += str[0];
        for(int i = 1; i < str.length(); i++)
        {
            if(str[i] == '1')
            {
                xors = str[i] ^ binary[i-1];
                binary += xors;
            }

            else binary += str[i];
        }
        unsigned long long res = stoi(binary);
        cout << res << "\n";
    }
    return 0;
}
