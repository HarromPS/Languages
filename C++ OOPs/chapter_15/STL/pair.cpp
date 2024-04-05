#include <iostream>
#include <cstdio>
#include <utility>
#include<tuple>
using namespace std;

// Pair -> couple togethers a pair of two values
/*
1) Array of objects are allocated in a map or hash_map
2) Syntax:
    pair <dataType_1, dataType_2> pairName
    where; pair(keyword)

3) Colections of elements in pairs is called tuples.
4) Header File: #include <utility>
*/

int main()
{

    // Object declaration/creation
    pair<string, int> p1;

    // Initialization of the first(key_value) & second(value) values
    // 1) Explicit Method
    p1.first = "Amit";
    p1.second = 10;

    pair<string, int> p2;
    // 2) Using curley braces
    p2 = {"Amar", 23};

    // 3) Using make_pair function
    pair<string, int> p3;
    p3 = make_pair("Deepak", 34);

    // 4) User inputs
    pair<string, int> p6;
    // cout<<"Enter first string value: ";
    // cin>>p6.first;
    // cout<<"Enter second int value: ";
    // cin>>p6.second;

    // Printing the values individually
    cout << "First value: " << p1.first << " & Second value: " << p1.second << endl;
    cout << "First value: " << p2.first << " & Second value: " << p2.second << endl;
    cout << "First value: " << p3.first << " & Second value: " << p3.second << endl;
    // cout<<"First value: "<<p6.first<<" & Second value: "<<p6.second<<endl;

    // Creation of new pairs from existing ones (copy pairs)
    pair<string, int> p4 = p1;

    cout << "\nFirst value: " << p4.first << " & Second value: " << p4.second << endl;

    int a = 10;
    cout << "\n"
         << "a: " << a << endl;
    int *a1 = &a;
    *a1 = 23; // a = 23
    cout << "a1:" << *a1 << " a: " << a << endl;

    // Copy by reference modifies the existing pair
    // like int * a1 = a;
    pair<string, int> &p5 = p1;
    p5.first = "Abhi";
    p5.second = 45;
    cout << "\nFirst value: " << p5.first << " & Second value: " << p5.second << endl;

    // Methods
    // 1) swap (pair_1 ,pair_2) OR swap(p1.first, p2.first)
    cout << "\nBefore First value: " << p1.first << " & Second value: " << p1.second << endl;
    cout << "First value: " << p2.first << " & Second value: " << p2.second << endl;

    swap(p1, p2);

    cout << "\nAfter First value: " << p1.first << " & Second value: " << p1.second << endl;
    cout << "First value: " << p2.first << " & Second value: " << p2.second << endl;

    pair<int, int> p12 = {10, 20};
    cout << "\nFirst value: " << p12.first << " & Second value: " << p12.second << endl;
    swap(p12.first, p12.second);
    cout << "First value: " << p12.first << " & Second value: " << p12.second << endl;

    pair<string, int> p13 = {"Hello", 20};
    cout << "\nFirst value: " << p13.first << " & Second value: " << p13.second << endl;
    // swap(p13.first, p13.second);
    cout << "First value: " << p13.first << " & Second value: " << p13.second << endl;

    // 2) Another way to access the pair values :
    // where; get - method name, <0> - first element, <1>- second element (objName)
    cout<<get<0>(p13)<<" "<<get<1>(p13);

    // Array of pairs
    pair<int,int> P[5];
    for(int i=0;i<5;i++)
    {
        P[i].first = i+1;
        P[i].second = 2*i+1;
    }
    cout<<endl;
    for(int i=0;i<4;i++)
    {
        swap(P[i].first,P[i+1].first);
        swap(P[i].second,P[i+1].second);
        cout<<P[i].first<<" "<<P[i].second<<endl;
    }
    cout<<P[4].first<<" "<<P[4].second<<endl;

    // 3) tie() -> unpacks its values to the variables in same order
    pair <char,int> t4=make_pair('c',10);
    // without 'ignore'
    int a;
    char ch;
    // defined undet tuple header file
    tie(ch, a) = t4;
    cout << get<0>(t4) << " " << get<1>(t4) << endl;
    cout << ch << " " << a << endl;

    int m;
    char cd;
    // with 'ignore' m-> ignored & remained uninitialized
    tie(cd, ignore) = t4;
    cout << get<0>(t4) << " " << get<1>(t4) << endl;
    cout << cd << " " << m << endl;


    return 0;
}