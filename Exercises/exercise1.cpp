#include <iostream>
using namespace std;
int main()
{
    int numberStore;
    int sum = 0;
    int i;
    int num;
    int average;
label:
    cout << "Enter the number of positive numbers to get from the keyboard :";
    cin >> numberStore;
    if(numberStore==0){
        goto label;
    }
    for (i = 0; i < numberStore; i++)
    {
        cout << "Enter those numbers: ";
        cin >> num;    
        if(num==1){
            goto terminate;
        }    

        sum += num;
    }
    terminate:
    average = sum/numberStore;
    cout <<"The sum is: "<< sum <<endl;
    cout<<"The average is: "<<average;
     
}