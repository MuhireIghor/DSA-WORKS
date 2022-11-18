#include <iostream>
using namespace std;
int fibonaci(int n)
{
 
    if (n == 0)
    {
        return 0;
    }
    if (n ==1 )
    {
        return 1;
    }
int small1 = fibonaci(n-1);
int small2 = fibonaci(n-2);
return small1+small2;
}
int main()
{
    int sum = fibonaci(5);
    cout << sum;

    return 0;
}