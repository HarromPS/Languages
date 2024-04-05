#include <iostream>
#include <cstdio>
using namespace std;
// Including the header file for list(linked list)
#include <list>

// Sequence Container(array): 2) List (Linked List) in STL
// Writing linked list for STL

// Creating a function to display the list
void Display(list<int> &lst)
{
    list<int>::iterator iter_x;
    iter_x = lst.begin();
    for (iter_x; iter_x != lst.end(); iter_x++)
    {
        cout << *(iter_x) << " ";
    }
    cout << endl;
}
int main()
{
    list<int> list1;    // zero length list
    list<int> list2(3); // Empty list of size 7

    // INSERTION IN THE LIST
    // Has zero length so any size of element can be added
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(2);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);

    // Creating an iterator to point the first element of the list
    list<int>::iterator iter;
    iter = list1.begin();
    // Printing the value pointer pointer by the iter
    // cout << *(iter) << " ";
    // Printing second element in the list
    // iter++;
    // cout << *(iter) << endl;
    // cout<<"Displays the list 1"<<endl;
    // Display(list1);

    // list<int> list2(3); // Empty list of size 7
    // Iterator to point to the first element of list2
    list<int>::iterator iter2;
    iter2 = list2.begin();
    *iter2 = 20;
    iter2++;
    *iter2 = 32;
    iter2++;
    *iter2 = 23;
    iter2++;
    list2.sort();
    // cout<<"Displays the list 2"<<endl;
    // Display(list2);

    // DELETION FROM THE LIST
    // removes element from last
    // cout<<"Removes element from list at last position"<<endl;
    list1.pop_back();
    // Display(list1);
    // removes first element
    // cout<<"Removes element from list at first position"<<endl;
    list1.pop_front();
    // Display(list1);
    // removes middle/given element
    // cout<<"Removes element from list by value (4)"<<endl;
    list1.remove(4);
    // Display(list1);
    // removes elements with all its occurances
    // cout<<"Removes elements with all its occurances from list (2, 2, 2)"<<endl;
    list1.remove(2);
    list1.remove(212); // element is not in the list so no affect
    // Display(list1);

    list<int> list3; // zero length list
    list3.push_back(10);
    list3.push_back(2);
    list3.push_back(25);
    list3.push_back(74);
    list3.push_back(14);
    // LIST SORTING
    cout << "Displays the list 3" << endl;
    Display(list3);
    // Sorts the list
    list3.sort();
    cout << "Displays sorted the list 3" << endl;
    Display(list3);

    // Merges the list
    // list3.merge(list2);
    // cout<<"Displays merged list 3 with list 2"<<endl;
    // Display(list3);

    // list3.merge(list2);
    // cout<<"Displays merged & sorted list 3 with list 2"<<endl;
    // Display(list3);

    // Reverses the list
    list3.reverse();
    cout << "Displays reversed list 3" << endl;
    Display(list3);

    // Swaps the list elements
    list3.swap(list2);
    cout << "Displays swaped list 3" << endl;
    cout << "list2:: ";
    Display(list2);
    cout << "list3:: ";
    Display(list3);

    // Clears the list
    list3.clear();
    cout << "Displays cleared/empty list 3" << endl;
    Display(list3);

    return 0;
}