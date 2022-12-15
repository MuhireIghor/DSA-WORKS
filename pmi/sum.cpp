#include <iostream>
using namespace std;
int x;
int addNumbers(int n[],int x){
    int sum;
    for(int i=0;i<x;i++){
        sum+=n[i];
    }
    return sum;
}
int main(){
    int a[4]={1,2,3,4};
    int sum = addNumbers(a,4);
    cout<<sum;
    
}