#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

// Nesting of members ke functions
class binary
{
// private:
    string s;   // private member

public:
    // methods declared inside the class
    void setvalue(void); // will take nothing as a parameter
    void checkvalue(void);
    void ones_complement(void); // to complement binary nos
    void display(void);         // to display complemented binary nos
};
// methods are defined outside the class using scope resolution operator
void binary ::setvalue(void)
{
    cout << "\nEnter a binary number" << endl;
    cin >> s; // taking user input for private member
}
// method defined outside to check the above function
// to check the values entered are binary or not
void binary ::checkvalue(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        // expln: e.g 5234
        // s at i=0 => 5,s at i=1 => 2,s at i=2 => 3,s at i=3 => 4
        // 5!=0/1, 2!=0/1, 3!=0/1, 4!=0/1

        // e.g 1111
        // s at i=0 => 1,s at i=1 => 1,s at i=2 =>1,s at i=3 => 1
        // 1!=0/1, 1!=0/1, 1!=0/1, 1!=0/1
        // all condition are false so else execution0
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary number" << endl;
            exit(0); // exit the loop with return 0
        }
        else
        {
            cout << "Correct" << endl;
            break;
        }
    }
}

// to complement binary nos
void binary ::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';      // repalce with char '1'
        }
        else 
        {
            s.at(i) = '0';
        }
    }
}

// to display complemented binary nos
void binary ::display(void)
{
    cout << "The complement of binary numbers is.: " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}

int main()
{

    binary bin; // class object created

    bin.setvalue();        // calling the function to set the value of private member
    bin.checkvalue();      // calling the function to check & display result
    bin.ones_complement(); // calling the function to complement values
    bin.display();         // calling the function to check & display result

    binary bin2;

    
    bin2.setvalue();        // calling the function to set the value of private member
    bin2.checkvalue();      // calling the function to check & display result
    bin2.ones_complement(); // calling the function to complement values
    bin2.display();         // calling the function to check & display result


    return 0;
}