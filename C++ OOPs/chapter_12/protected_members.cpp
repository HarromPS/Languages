#include <iostream>
#include <cstdio>
using namespace std;

// Creating a Base class
class Base
{
    // Private members
private:
    int a;

    // Protected members
    // 'Protected members' are the 3rd access specifier of classes
    // they behave like private members but they can be Inherited

    // They are accessible only by the membe function of within the
    // class & any class which is derived from it.

protected:
    int pro;
};

// Creating a Derived class Inherited from the Base class
class Derived : protected Base
{
    // Protected members are Inherited Protectedly
    // int pro;  as inherited mode is protected
};

/*
Visibility of the Inheited Members 

   Base                            Derived in visibility mode
   members
                    Public                 Private                 Protected

1. Private        Not Inherited           Not Inherited           Not Inherited
2. Public       Inherited Public        Inherited Private      Inherited Protected
3. Protected    Inherited Protected     Inherited Private      Inherited Protected

*/
int main()
{
    Base obj_B;
    Derived obj_D;
    
    // cout<<obj_B.pro<<endl;  // Will not work & is not accessible as it is protected
                               // for Base class
    // cout<<obj_D.pro<<endl;  // Will not work & is not accessible as it is protected
                               // for Derived class as well 
    
    return 0;
}