#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x, check = 0;
        unsigned long long y;
        cin >> x >> y;
    //    if((x == 1)&&(y ==1)) check = 1;
  //      else if ((x == 1)&&(y != 1)) check = 2;
        double div = log(y)/log(x);
        if((div == floor(div))||((x == 1)&&(y ==1)))
            cout << "1\n";
        else cout << "0\n";
    }
	return 0;
}
