#include<iostream>
using namespace std;
int main(){
    int num[6]{6,2,4,9,3,7};
    int key,j;
    for(int i=1;i<6;i++){
     key=num[i];
     j=i-1;
     while(j>=0 && num[j]>key){
        num[j+1] =num[j];
j=j-1;
num[j+1] = key;
     }
    
    }
    for(int k=0;k<6;k++){
        cout<<num[k]<<endl;

    }

}