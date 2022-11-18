#include<iostream>
using namespace std;

int main(){
    int x =123456;
    int arr[6];
    for(int i=5;i>=0;i--){
        arr[i] = x%10;
        x/=x/10;
        cout<<x<<endl;
        
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}