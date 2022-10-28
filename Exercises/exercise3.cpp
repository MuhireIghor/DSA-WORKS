#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int base,height;
    cout<<"Enter the base of the triangle: ";
    cin>>base;
    cout<<"Enter the height of the triangle: " ;
    cin>>height;
    int heightSq = pow(height,2);
    int baseSq = pow(base,2);
    int sqareSum=baseSq+heightSq;
    int hypotenuse=sqrt(sqareSum);
    cout<<"The hypotenuse is : "<<hypotenuse;
    
}