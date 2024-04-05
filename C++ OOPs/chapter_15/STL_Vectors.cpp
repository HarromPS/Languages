#include <iostream>
#include <cstdio>
using namespace std;

// Including the vector header file for Sequence Container
// Sequence Container(array): 3) Vector --> Random Access
#include <vector>

// Implementation of STL(Standard Template Library)
// Creating a class template
template <class T>
void Display(vector<T> &v)
{
    cout<<"Displaying this vector"<<endl;
    // v.size() gets the number of elements of the vector class
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout << endl;
}
int main()
{
    // Object creation of vector array
    // Syntax:
    // vector < datatype > object_name;

    // Ways to create a vector
    vector<int> vec0; // zero length integer vector 

    vector<int> vec1; 
    int element, size;
    // cout << "Enter the size of your vector==>" << endl;
    // cin >> size;
    // cout << "Entering elements using push_back function" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << i + 1 << ": ";
    //     cin >> element;
    //     vec1.push_back(element);
    // }
    // cout << "Showing the elements" << endl;
    // Display(vec1);
    // cout<<"pop_back removes the last element from the sequence"<<endl;
    // v1.pop_back();

    // Creating a Iterator pointer which points an element of the object
    // Syntax
    // vector<int>::iterator iter = vec1.begin();

    // Inserting an element at the first position
    // vec1.insert(iter, 10);
    // Display(vec1);

    // Inserting an element at the second position
    // vec1.insert(iter + 1, 20);
    // Display(vec1);

    // Inserting n copies at specied position
    // vec1.insert(iter+1 , 5, 26);
    // Display(vec1);

    vector<char> vec2(4); // 4-element character vector
    // vec2.push_back('A');
    // Display(vec2);
    vector<char> vec3(4); // 4-element character vector
    vector<int> vec4(6,31); // 6 element vector of 31
    vec4.push_back(12);
    Display(vec4);
    cout<<"Size: "<<vec4.size()<<endl;

    

    return 0;
}
