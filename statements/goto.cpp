#include<iostream>
using namespace std;
int main(){
    int i,o;
    for(o=0;o<5;o++){
        for(i=0;i<3;i++){
            cout<<i<<endl;
            if(i==2){
                goto start;
            }
        }
        cout<<"outer loop "<<o <<" ended !";
    }
    start:
    cout<<"hello WOrld";
}