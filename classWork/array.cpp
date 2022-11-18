#include<iostream>
using namespace std;
int main(){
int arr[5] = {10,20,30,40,50};
int *p =arr;
cout<<*p <<endl;
cout<<*(p+1)<<endl;
cout<<*(p+2)<<endl; 
cout<<*(p+3)<<endl; 
cout<<*(p+4)<<endl; 
for(int i=0;i<5;i++){
    cout<<"The address of &arr["<<i<<"]=";
    cout<<&arr[i]<<endl;

}
for(int i =0;i<5;i++){
    cout<<"p + "<<i<<" ="<<p +1 <<endl;
}
    return 0;
}