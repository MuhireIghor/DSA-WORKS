#include<iostream>
using namespace std;
int factorial(int n,int m){
    if(m==n){
        return m;
    }
    return m*factorial(n,m+1);
}
int main(){
int m=1;
int n=6;
int sum = factorial(n,m);
cout<<"factorial = "<<sum;

} 