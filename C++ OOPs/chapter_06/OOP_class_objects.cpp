#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

// CLASSES AND OBJECTS IN OOPs

// class ==> extension of structure (in C)
// structures are limited 
// ==>  members are public
// ==> No methods/functions

class student // in OOPs a class is called as a template or a blueprint
              // here student is the name of the class
{
public:          // 'public' is a access specifier
                 // means it can be accessed anywhere
                 // i.e inside and outside the class
    string name; // inside class, the variables declared are called
    int roll_no; // as "Attributes", it can be of diff types
    string branch;
}  ;             // after defining the class put a semicolon the end
int main()
{
    student s1; // 's1' is an instance/sample/example/case of the class 'student'
                // we can create multiple objects of class 'student'
    student s2; // another object for the same class and so on

    // Accessing the attributes means the object having attributes
    // e.g a class of fruits and apple, banana, grapes are the objects 
    // then the attributes for the objects is given as
    // apple.colour, apple.shape, apple.size, banana.shape,....

    s1.name="Aman";     // attributes for the object s1 has been initialized
    s1.roll_no=10;
    s1.branch="IT";

    s2.name="Giridhari";    // attributes for the object s2 has been initialized
    s2.roll_no=20;
    s2.branch="CSE";

    // Accessing the attributes values

    cout<<"The attribute of name for object s1 is: "<<s1.name<<endl;
    cout<<"The attribute of roll no for object s1 is: "<<s1.roll_no<<endl;
    cout<<"The attribute of branch for object s1 is: "<<s1.branch<<endl;
    cout<<"The attribute of name for object s2 is: "<<s2.name<<endl;
    cout<<"The attribute of roll no for object s2 is: "<<s2.roll_no<<endl;
    cout<<"The attribute of branch for object s2 is: "<<s2.branch<<endl;



    return 0;
}