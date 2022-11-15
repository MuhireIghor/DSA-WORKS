#include<iostream>
#include<math.h>
using namespace std;

int main(){
int radius;
float area;
const float pi = 3.14;

cout<<"Enter the radius of the sphere : "<<endl;
cin>>radius;
area = ((4/3)*pi)*pow(radius,2);
cout<<"The area of the sphere with radius of "<<radius <<" is "<<area ;


    return 0;
}