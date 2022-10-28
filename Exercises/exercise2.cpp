#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string word;
    int num1;
    char terminator;
    cout << "Enter the first number : ";
    cin >> num1;
    cout << "Enter any word of your choice : ";
    cin.ignore();
    getline(cin, word);
    cout << word;
    cout << num1;
    while (terminator != 'q')
    {
        cout << word << endl;
        cout << "Enter letter q to terminate the loop:";
        cin >> terminator;
    }
}