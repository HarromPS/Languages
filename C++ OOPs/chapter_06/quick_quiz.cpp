#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;

// Create a function which takes 2 points and compute the distance
// between those points

class point
{
    int x, y;
    friend int distance(point, point);

public:
    // Declaring a constructor inside the class
    // point (point);
    point(int a, int b)
    {
        x = a;
        y = b;

        int dist = 0;
        if (x > y)
        {
            dist = x - y;
        }
        else
        {
            dist = y - x;
        }
        display(dist); // function in another function
    }
    void display(int dist)
    {
        cout << "The Point is: (" << x << ", " << y << ")" << endl;
        cout << "The distance between two points is: " << dist << endl;
    }
};

int distance(point o1, point o2)
{
    int dist1,dist2;

    if (o1.x >= o2.x)
    {
        dist1 = o1.x - o2.x;
    }
    else
    {
        dist1 = o2.x - o1.x;
    }
    if (o2.y >= o1.y)
    {
        dist2 = o2.y - o1.y;
    }
    else
    {
        dist2 = o1.y - o2.y;
    }

    int result=sqrt(dist1*dist1 + dist2*dist2);
    cout<<endl<<
    "The distance between two points is: " <<result<<endl;

}
int main()
{
    // cout<<"Enter two numbers"<<endl;
    // int a,b;
    // cin>>a>>b;

    point obj1(1, 0), obj2(70,0);   // 15-12 == 9 , 17-13 == 9 sqrt(18)
    distance(obj1, obj2);

    return 0;
}