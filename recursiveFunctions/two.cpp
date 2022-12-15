// HINTS:
// A character can not be initialised to an empty value i.e char c1 = '' but a string can do so ie string c2= " "
#include <iostream>
using namespace std;
int printReversedArray(string word, int n = 0)
{
    int length = word.length();
    int i = (length - 1) - n;
    if (i < 0)
    {
        return 0;
    }
    char c1 = word[i];
    cout << c1;
    return printReversedArray(word, n + 1);
}
int main()
{
    printReversedArray("Muhire");
}