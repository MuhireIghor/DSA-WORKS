#include<iostream>
using namespace std;
class Student {
    public:
    string name;
    int age;
    void printName(){
        cout<<"The student name is "<<name;
    }
    void sayAge();
};
void Student::sayAge(){
cout<<"The student is "<<age<<" years old";
}
int main(){
Student s1;
s1.name = "Muhire Ighor";
s1.age=17;
s1.printName();
s1.sayAge();
    return 0;

}