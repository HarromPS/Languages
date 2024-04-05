#include <iostream>
#include <cstdio>
using namespace std;
// OOPs Practical 04:
// WAP to design a class complex to represent complex no.
// The complex class should use on external friend function
// to add two complex nos. The function should return an object of type
// complex representing the sum of two complex nos.
// using friend function

class complex
{
private:
	int real, img;
	friend complex add(complex & obj1, complex & obj2);

public:
	void getdata(int a1, int b1)
	{
		real = a1;
		img = b1;
	}
	void displaydata()
	{
		cout<<"The complex number is: "<<real<<" + "<<img<<"i"<<endl;
	}
};

// Creating a friend function to add real and img part

complex add(complex & obj1, complex & obj2)
{
		complex o3;
		o3.getdata((obj1.real+obj2.real),(obj1.img+obj2.img));
		return o3;
}
int main()
{
	// cout<<"Hello World!"<<endl;

	complex o1, o2;
	o1.getdata(10, 20);
	o1.displaydata();

	o2.getdata(33, 46);
	o2.displaydata();

	complex sum; 	// object to store the sum of the other two objects

	sum=add(o1,o2);
	cout<<endl<<"The sum of two complex number ==> "<<endl;
	sum.displaydata();

	return 0;
}