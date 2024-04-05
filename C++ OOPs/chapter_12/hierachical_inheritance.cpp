#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// Hierachical Inheritence:
// It is a combination of MUlti-level & Multiple inheritence
// It has a common Base class
// And multiple Derived classes and those classes serves as a
// Base class for their lower classes

// E.g:
// Creating a Student Base class
class Student
{
public:
    int roll_no;
    string name;
    void getData(int r, string s)
    {
        roll_no = r;
        name = s;
    }
};

// Creating several Derived classes
class CSE : public Student
{
public:
    int cse = 100;
    void show_cse()
    {
        cout << "My name is " << name << endl;
        cout << "My roll no is " << roll_no << endl;
    }
};
class IT : public Student
{
public:
    int it = 100;
    void show_it()
    {
        cout << "My name is " << name << endl;
        cout << "My roll no is " << roll_no << endl;
    }
};
class EXTC : public Student
{
public:
    int ex = 100;
    void show_extc()
    {
        cout << "My name is " << name << endl;
        cout << "My roll no is " << roll_no << endl;
    }
};
// Creating lower classes for Derived classes from Student
class Result : public CSE, public IT, public EXTC
{
public:
    void result()
    {
        cout << cse << "% Placement of CSE students" << endl;
        cout << it << "% Placement of IT students" << endl;
        cout << ex << "% Placement of EXTC students" << endl;
    }
};
int main()
{
    // Creating objects for derived classes
    CSE stud1;
    stud1.getData(1, "Amit");
    // Showing for CSE students
    stud1.show_cse();
    cout<<endl;
    IT stud2;
    stud2.getData(2, "Aman");
    // Showing for IT students
    stud2.show_it();
    cout<<endl;
    EXTC stud3;
    stud3.getData(3, "Amar");
    // Showing for EXTC students
    stud3.show_extc();
    cout<<endl;

    Result abc;
    abc.result();

    return 0;
}