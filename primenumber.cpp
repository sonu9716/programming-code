#include <iostream>
using namespace std;
int main()
{
    int n, div, flag = 0;
    div = 2;
    cin >> n;
    int m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if (n % div == 0)
        {
            cout << "not a prime number ";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "this is a prime number ";
        return 0;
    }
}