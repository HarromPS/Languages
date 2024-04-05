#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;

// Hybride Inherirtence is a combination of two or more Inheritences
/*
 for e.g        student(base_1)
                    |
                    |
                test(intemediate)       sports(base_2)
                    |                           |
                    |                           |
                    |                           |
                result(derived)   <--------------

    Student --> test -->   result
                sports-->
*/

// Create a base student class
class Student
{
protected:
    int roll_no;

public:
    void getRoll_no(int r_no)
    {
        roll_no = r_no;
    }
    void displayRoll_no()
    {
        cout << "The Roll no of the student is " << roll_no << endl;
    }
};

// Creating a another base class for multiple inheritence with
// Derived class
class Sports
{
protected:
    char score;

public:
    void getScore(char score)
    {
        this->score = score;
    }
    void displayScore()
    {
        cout << "The Highest score of the student in sports is " << score
             << endl;
    }
};

// Creating a intermediate class
class Test : public Student
{
protected:
    int marks;

public:
    void getMarks(int marks)
    {
        this->marks = marks;
    }
    void displayMarks()
    {
        cout << "The student's total marks is " << marks << endl;
    }
};

// Creating a Derived class inherited from student, test & score class
class Result : public Test, public Sports
{
protected:
    string result;

public:
    void getResult(string str)
    {
        result = str;
    }
    void Display()
    {
        // Invoking all functions of the base classes for
        // derived class
        displayRoll_no();
        displayScore();
        displayMarks();
        cout << "The student is " << result << endl;
    }
};
int main()
{
    // Creating a Derived class object to access all memebers
    Result Aman;
    Aman.getRoll_no(10);
    Aman.getMarks(348);
    Aman.getScore('A');
    Aman.getResult("Pass");
    Aman.Display();
    return 0;
}