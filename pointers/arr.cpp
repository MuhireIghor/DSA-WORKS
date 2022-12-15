#include <iostream>
using namespace std;
int main()
{
    int sum,i;
    int a[5]={10,20,30,40,50};
   for (sum = *a, i = 1; i < 5; i++)
sum+= *(a + i);
// cout<<sum<<endl;

 int sum2,i2;
    int a2[5]={10,20,30,40,50};
int *p2;
p2=a2;
int way = *a2;
cout<<way;
   for (sum2 = *a2, p2 = a2+1; p2 < a2+5; p2++)
sum2  += *p2;
cout<<sum2<<endl;

    return 0;
}
