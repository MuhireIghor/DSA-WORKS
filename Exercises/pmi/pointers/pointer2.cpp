#include<iostream>
using namespace std;
int main ()
{
// Declaring Variables and Pointer
int Num=10;
int *Ptr;
Ptr=&Num;
// Printing Values of Pointer
cout <<"\n Value Of Num :" << Num << endl ;
cout <<"\n Address Of Num :" << &Num << endl;
cout <<"\n Value Of Ptr :" << Ptr << endl;
cout <<"\n Address Of Ptr :" << &Ptr << endl;
cout <<"\n Ptrs's Pointer Value:" << *Ptr << endl;
cout <<"\n Ptr Equal to &Num :" << *(&Num) << endl;
// Change Values of Using Pointer
cout <<"\n\n We Can Change Value Of Num,Without Using Num" << endl;
*Ptr=100;
cout <<"\n Address Of Num :"<<&Num << endl;
cout <<"\n Ptr's Pointer Value:"<<Num << endl;
getchar();
}
