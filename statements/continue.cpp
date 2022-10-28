#include<iostream>
using namespace std;

int main(){
int missed;
for (int count = 1; count <= 10; ++count ) {
if ( count == 5 ) {
missed = count;
continue; 
} 
cout << count << ", ";
} //end for
cout <<"The loop skips: "<<missed<<endl;
return 0;}
