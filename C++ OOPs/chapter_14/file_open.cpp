#include <iostream>
#include <cstdio>
#include<string>

#include <fstream>
using namespace std;

int main()
{
    // 2) Using member function of the class
    // open()

    ofstream out;
    out.open("sample_3.txt");
    // Writing in the files
    out << "This is me 1" << endl;
    out << "This is me 2" << endl;
    out << "This is me 3" << endl;
    out << "This is me 4" << endl;

    out.close();
    // We can printf(read) the file content using extractor operator
    ifstream in;
    string s1,s2;
    in.open("sample_3.txt"); 
    // in>>s1>>s2;
    // cout<<s1<<endl<<s2;

    while(in.eof()==0)
    {
        getline(in,s1);
        cout<<s1<<endl;
    }
    in.close();
    return 0;
}