#include <iostream>
#include <cstdio>
using namespace std;

// Multi-Level Inheritence
/*
    1) If we are inherting B from A & C from B ==> [A-->B-->C  =} called Inheritence Path]
    2) A is a Base class for B & B is a Base class for C
*/
// Creating a Student class
class Student
{
protected:
    int roll_number;

public:
    void get_rollnumber(int roll_no); // Declaration of method
    void set_rollnumber(void);        // it will take nothing but void
};
// Function Defination
void Student ::get_rollnumber(int roll_no)
{
    roll_number = roll_no;
}
void Student ::set_rollnumber()
{
    cout << "The Roll number of the student is " << roll_number << endl;
}

// Creating a intermediate base class
class Exam : public Student
{
protected:
    float maths, physics, chemistry;

public:
    void get_marks(float, float, float); // Declaration
    void set_marks(void);
};
// Function Defination
void Exam ::get_marks(float mat, float phy, float chem)
{
    maths = mat;
    physics = phy;
    chemistry = chem;
}
void Exam ::set_marks()
{
    cout << "The marks of the student is " << endl;
    cout << "Maths: " << maths << endl;
    cout << "Physics: " << physics << endl;
    cout << "Chemistry: " << chemistry << endl;
}

// Creating a Derived class accessing the members of both the classes
class Result : public Exam
{
protected:
    float percentage;

public:
    void Display_result();
};
void Result ::Display_result()
{
    set_marks();
    cout << "The percentage of the student is " << (maths + physics + chemistry) / 3 <<"%"<< endl;
}
int main()
{
    // Creating Object of the Result class to access all the function of all classes
    Result Amit;       // Today is Amit's Result
    Amit.get_rollnumber(146);
    Amit.set_rollnumber();
    Amit.get_marks(98.4,89,96.6);
    Amit.Display_result();
    return 0;
}