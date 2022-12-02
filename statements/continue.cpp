#include<iostream>
using namespace std;

int main(){
// int missed;
// for (int count = 1; count <= 10; ++count ) {
// if ( count == 5 ) {
// missed = count;
// continue; 
// } 
// cout << count << ", ";
// } //end for
// cout <<"The loop skips: "<<missed<<endl;
int x=10, y=20, z=5, t=2, s=7;
int k=x/y%s*t+y/x*t;
cout<<k;

int f=x*y/z%s*t-s*x/t;
cout<<f;

return 0;}
