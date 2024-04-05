#include<iostream>
#include<cstdio>
using namespace std;
// OOPs Practical 04:
// Q1 WAP to swap two private data members of two class 
// using friend function 

// Forward declaration 

class class2;

class class1
{
private:
	int a,b;
	friend void swap(class1 &,class2 &);
public:
	void getdata(int a1)
	{
		a=a1;
		
	}
	void displaydata()
	{
		cout<<a;
		
	}
};

class class2{
private: 
	int x,y;
	friend void swap(class1 &, class2 &);
public: 
	void getdata(int x1){
		x=x1;
	}
	void displaydata(){
		cout<<x;

	}
};
// Creating a friend function to swap two data members 
void swap(class1 & obj1, class2 & obj2){
	int temp=0;
	temp=obj1.a;
	obj1.a=obj2.x;
	obj2.x=temp;	 
}
int main(){
    class1 obj1;
	obj1.getdata(10);
	class2 obj2;
	obj2.getdata(20);

	cout<<"The value of numbers before swap is: ";
	obj1.displaydata();
	cout<<", ";
	obj2.displaydata();
	cout<<endl;
	swap (obj1,obj2);
	cout<<"The value of numbers after swap is: ";
    obj1.displaydata();
	cout<<", ";
	obj2.displaydata();
	return 0;
}