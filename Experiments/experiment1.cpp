#include<iostream>
using namespace std;
int main(){
char alphabet[] = {'a','b','c','d','e'};
char *p1 = alphabet;
cout<<p1<<endl;
int a = 0;
int *m = &a;
*m=33;
cout<<*m;


}