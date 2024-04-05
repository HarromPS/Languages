#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
/*
Q15. Write a Program illustrating how the constructors are implemented and the order in which they
are called when the classes are inherited. Use three classes named alpha, beta, gamma such that alpha
, beta are base class and gamma is derived class inheriting alpha & beta.*/
class alpha
{
public:
    int a1, a2;
    alpha() {}
    alpha(int A1, int A2)
    {
        this->a1 = A1;
        this->a2 = A2;
    }
    void getData()
    {
        cout << "The data of alpha is: (" << a1 << ", " << a2 << ")" << endl;
    }
    void Display1()
    {
        cout << "Alpha class is called" << endl;
    }
};
class beta
{
public:
    int b1, b2;
    beta() {}
    beta(int B1, int B2)
    {
        this->b1 = B1;
        this->b2 = B2;
    }
    void getData()
    {
        cout << "The data of beta is: (" << b1 << ", " << b2 << ")" << endl;
    }
    void Display2()
    {
        cout << "Beta class is called" << endl;
    }
};
class gamma : public alpha, public beta
{
public:
    int g1, g2;
    gamma() {}
    gamma(int G1, int G2)
    {
        this->g1 = G1;
        this->g2 = G2;
    }
    void getData()
    {
        cout << "The data of gamma is: (" << g1 << ", " << g2 << ")" << endl;
    }
    void Display3()
    {
        cout << "Gamma class is called" << endl;
    }
};
int main()
{
    alpha objA(1, 2);
    objA.getData();

    beta objB(3, 4);
    objB.getData();

    gamma objC(56, 17);
    objC.getData();
    cout << endl;
    objC.gamma::getData();

    cout << endl;
    objC.Display1();
    objC.Display2();
    objC.Display3();

    return 0;
}