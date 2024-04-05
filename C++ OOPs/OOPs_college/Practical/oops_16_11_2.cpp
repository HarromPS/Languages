#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
Q16. Write a Program to design a student class representing student roll no. and a test class
(derived class of student) representing the scores of the student in various subjects and sports
class representing the score in sports.  The sports and test class should be inherited by a
result class having the functionality to add the scores and display the final result for a student.*/
class Student
{
public:
    int Rollno;
    Student() {}
    void getRollno(int r)
    {
        this->Rollno = r;
    }
    void Display1()
    {
        cout << "The Roll No of the Student is" << Rollno << endl;
    }
};
class Test : virtual public Student
{
public:
    float maths, phy, chem;
    Test() {}
    void getMarks(float m, float p, float c)
    {
        this->maths = m;
        this->phy = p;
        this->chem = c;
    }
    void Display2()
    {
        cout << "The marks of the students is " << endl
             << "Maths :" << maths << "\nPhysics: " << phy << "\nChemistry: " << chem << endl;
    }
};
class Sports : virtual public Student
{
public:
    char score;
    float marks;
    Sports() {}
    void getScore(char score)
    {
        this->score = score;
    }
    void Score()
    {
        if (score == 'A' || score == 'a')
        {
            this->marks = 90;
        }
        if (score == 'B' || score == 'b')
        {
            this->marks = 75;
        }
        if (score == 'C' || score == 'c')
        {
            this->marks = 50;
        }
    }
    void Display3()
    {
        cout << "The marks of the student in sports is: " << marks << endl;
    }
};
class Result : public Test, public Sports
{
public:
    int g1, g2;
    Result() {}
    void Avg()
    {
        cout << "The Roll No of the Student is: " << Rollno << endl;
        float avg, total;
        total = maths + chem + phy;
        avg = total / 3;
        cout<<"The total marks the student scored is: "<<total<<" out of 300 marks"<<endl;
        cout<<"The average marks the student scored is: "<<avg<<"%"<<endl;

        if (avg < 40)
        {
            cout << endl
                 << "The student failed the test" << endl;
        }
        else
        {
            cout << endl
                 << "The student Passed the test" << endl;
        }
    }
};
int main()
{
    Result S1;
    S1.getRollno(10);
    S1.getMarks(78,89,79);
    S1.getScore('A');
    S1.Avg();
    return 0;
}