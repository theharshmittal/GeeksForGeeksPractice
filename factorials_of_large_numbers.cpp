#include <iostream>

using namespace std;

int multiply(int, char[], int);

void factorial(int fact)
{
    char *fac= new char[170];
    fac[0] = 1;
    int fact_size = 1;

    for (int num = 2; num <= fact; num++)              // Applying 100! = 1*2*3*4*%........*100
        fact_size = multiply(num, fac, fact_size);

    for (int i = fact_size-1; i >= 0; i--)          // Display Loop
        cout << (int)fac[i];
    cout << "\n";
}

int multiply(int num, char fac[], int fact_size)
{
    int carry = 0;

    for (int i = 0; i < fact_size; i++)
    {
        int prod = fac[i] * num + carry;
        fac[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry!=0)
    {
        fac[fact_size] = carry%10;
        carry = carry/10;
        fact_size++;
    }
    return fact_size;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        factorial(n);
    }
    return 0;
}
