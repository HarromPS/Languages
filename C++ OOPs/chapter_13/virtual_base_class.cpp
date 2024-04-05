#include <iostream>
#include <cstdio>
using namespace std;

// Virtual Base Class
/*
    class A }   class c     }   class D
            }   class B     }

    members of class A are inherited twice from two paths (class B & class C)
   to Derived class D

   Syntax :: Virtual Base Class
        class A
        {
            //   code;
        };
        class B : virtual public class A
        {
            //   code;
        };
        class C : public virtual class A
        {
            //   code;
        };
        class D :public class B, public class C
        x{
            //   code;
        };
*/

// e.g
/*
    Student(Base) --> (virtual) Exam (intermediate)  + (virtual) Sports (intermediate)
    Exam (intermediate)  + Sports (intermediate) --> Result (Derived)
*/

// Creating a Student Base class
class Student
{
    // Declaring protected & public members of the Student class
protected:
    int roll_no;

public:
    void setRoll_no(int rl)
    {
        roll_no = rl;
    }
    void displayRoll_no(void)
    {
        cout << "The Roll No of the Student is " << roll_no << endl;
    }
};

// Creting a intermediate Exam class inheriting Student as a Virtual base class
class Exam : public virtual Student
{
protected:
    float maths, physics;

public:
    void setMarks(float m1, float phy)
    {
        maths = m1;
        physics = phy;
    }
    void displayMarks(void)
    {
        cout << "The marks of the student are " << endl
             << "Maths: " << maths << endl
             << "Physics " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    char score;

public:
    void setScore(char sc)
    {
        score = sc;
    }
    void displayScore(void)
    {
        cout << "The score of the Student in Sports is " << score << endl;
    }
};

class Result : public Exam, public Sports
{
protected:
    float total;

public:
    void Show(void)
    {
        displayRoll_no();
        displayMarks();
        displayScore();
        cout << "The total marks of the student is " << maths + physics << endl;
    }
};

int main()
{
    // Creating an object of the Result class
    Result Amit;    // Result of Amit
    Amit.setRoll_no(100);       // Amit's Roll no
    Amit.setMarks(88.68,95.03); // Amit's marks in maths & physics
    Amit.setScore('A');         //  Amit's Score in sports

    Amit.Show();

    return 0;
}