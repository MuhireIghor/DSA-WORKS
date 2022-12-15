#include<iostream>
using namespace std;
int main(){
    int i=10;
    int *p = &i;
    // cout<<"The address of i: "<<&i<<endl;
    cout<<"The address of i using pointer : "<<p<<endl;
    cout<<"The address of p using &: "<<&p<<endl;
    cout<<"The value of i  is "<<i<<endl;
    cout<<"The value of i using pointer: "<<*p<<endl;
    i=20;
    cout<<"The value of i is: "<<i <<endl;
    cout<<"The value of i using pointer : "<<*p<<endl;
*p = 60;
cout<<"The value of i is : "<<i <<endl;
cout<<"The value of i using pointer:"<<*p<<endl;
int x;
int *ptr;
x=5;
ptr = &x;
cout<<*ptr;
getchar();
return 0;


}