#include<iostream>
using namespace std;
int main(){
    int count;
    for(count=0;count<=10;count++){
        cout<<count<<" ,";
        if(count == 5){
            break;
        }
    }
    cout<<"The loop exists at "<<count;
    return 0;
}