#include<iostream>
using namespace std;
int main () {
int a=20;
int *p=&a; // Valid
int *q=NULL;
q=p;  // Valid
cout<<p<<endl;
cout<<q<<endl;// Print same address as p
cout<<*q<<endl;// Print 20
cout<<*p<<endl;// Print 20
int j=4;
   cout<<j<<endl;
   int *v = NULL;
    *v = 50;
    cout<<*v;

return 0;}
