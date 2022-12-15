#include<iostream>
using namespace std;
string printString(string word,int n=0){
    if(word[n] == '\0'){
        return "\0";
    }
    char ch = word[n];
    return ch+printString(word,n+1);

}
int main(){
   string c1 = printString("Muhire");
   cout<<c1;
    return 0;
}