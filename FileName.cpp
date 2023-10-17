#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
string inputFileName();
int main()
{
    cout << "Hello world!" << endl << endl;
    string fileName;
    fileName = inputFileName();
    cout << fileName;
    return 0;
}

string inputFileName()
{
    string fileName2;
    cin >> fileName2;
    while (fileName2.find('\\') != string::npos)
    {
        fileName2.insert(fileName2.find('\\') + 1, "\\");
    }
}
