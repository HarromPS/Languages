#include <iostream>
#include <cstdio>
// Header file for file streaming from disk to program
#include <fstream>

using namespace std;
/*
The useful classes for working with files in C++ are
1) fstreambase class
2) ifstream class   --> Derived from fstreambase class
3) ofstream class   --> Derived from fstreambase class

In order to work with with files in C++, you will have to open it.
Primarily there are 2 ways to open the file:
1) Constructor
2) Using the memeber function open() of the class

*/

int main()
{
    // 1) Using constructor function of the class

    string st = "Hello World, Writing in the file.", st2;
    // Opening files using Constructor & writing it
    // Creating objects of the 'ofstream' --> output file stream in file
    // in is an object of the class ofstream
    ofstream in("sample.txt"); // Writing in the file
    in << st;

    // Opening files using Constructor & reading it
    // Creating objects of the 'ifstream'   --> input file stream in file
    // in is an object of the class ifstream
    ifstream out("sample_2.txt");
    out >> st2;
    getline(out, st2);
    cout << st2;

    out.close();
    in.close();
    return 0;
}