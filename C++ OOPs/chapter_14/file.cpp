#include <iostream>
#include <cstdio>

#include <fstream>
using namespace std;

// file input & output operations
int main()
{
    // 1) Using constructor function of the class

    // Creating a ofstream(output to file) class object
    cout << "Enter a string: ";
    string st;
    cin >> st;
    ofstream out("sample.txt");
    // output to file
    out << "This is a string Title " << st;

    // Closing the file
    out.close();

    // Creating a ifstream(reading the file & printing it) class object
    ifstream in("sample_2.txt");
    string content;
    in >> content;
    cout << "The content of the file is " << content << endl;
    return 0;
}