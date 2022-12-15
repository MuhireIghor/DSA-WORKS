#include <iostream>
using namespace std;
int primePros(int n)
{
    int numArr[] = {};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (j % 1 == 0)
            {
                if (j % (j + 1) != 0 && j % j == 0)
                {
                    numArr[i] = j;
                    break;
                }
            }
        }
    }
    return numArr[n-1];
}
int main(){
   cout<<primePros(6);
}