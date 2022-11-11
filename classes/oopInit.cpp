#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    void printName(){
        cout<<"The student name is "<<name;
    }
};
int main(){
Student s1;
s1.name = "Muhire Ighor";
s1.printName();
    return 0;

}