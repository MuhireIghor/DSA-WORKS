#include <iostream>
using namespace std;
int sum(int n)
{
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
        return sum;

}
int sum2(int n){
    int sum = 0;
    for(n=0;n<5;n++){
        sum = n((n+1)/2);
        
    }
    return sum;
}
int main()
{
    cout << sum(5);
    cout<<sum2(5);
    return 0;
}