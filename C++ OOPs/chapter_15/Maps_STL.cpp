#include <iostream>
#include <cstdio>
// Adding Header files for maps
#include <map>
using namespace std;

// Associative Container(array): 3) Maps (Red Black Trees)
int main()
{
    // Creation of Maps
    map<string, int> marksMap;
    // Key- value linking
    marksMap["Amit"] = 99;
    marksMap["John"] = 60;
    marksMap["Meeta"] = 2;

    // Inserting Pairs in maps
    marksMap.insert({ {"Rohan", 79}, {"AP", 85} });
    // Iterator pointing the first pair of the map
    // of the same template
    map<string, int>::iterator iter;
    iter = marksMap.begin(); // pointing the first pair
    // Printing the Key - value pairs
    for (iter; iter != marksMap.end(); ++iter)
    {
        cout << (*iter).first << "-->" << (*iter).second << endl;
        // printf("%s-->%d\n",(*iter).first,(*iter).second); Will not give proper output
    }
    // Size, Max_size, Empty map checker
    cout<<"The size of the map is: "<<marksMap.size()<<endl;
    cout<<"The Max_size of the map is: "<<marksMap.max_size()<<endl;
    cout<<"The empty's return value is: "<<marksMap.empty()<<endl;
    return 0;
}