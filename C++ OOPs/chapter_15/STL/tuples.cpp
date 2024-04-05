#include <iostream>
#include <cstdio>
#include <tuple>
using namespace std;

/*
tulpe ->object that can hold number or elements
1) can be of diff. dataTypes
2) are initilized as argumenta in order in which they will be going to be accessed.

*/
int main()
{
    // Declaration
    tuple<char, int> t1, t2, t3, t4, t5;
    // initialization
    // 1) make_tuple()
    t1 = make_tuple('a', 10);

    // 2) using curley braces
    t2 = {'b', 20};

    // 3) By user input
    // cin>>get<0>(t3);

    // 4) By pair
    tuple<int, int> t7(32, 54);

    // 5) By member elements
    get<0>(t3) = 'e';
    get<1>(t3) = 12;

    // Accessing the values of the tuples
    // 1) get<index>(tuple_name)
    cout << get<0>(t1) << " " << get<1>(t1) << endl;
    cout << get<0>(t2) << " " << get<1>(t2) << endl;
    cout << get<0>(t3) << " " << get<1>(t3) << endl;

    // 2) tulpe_size() ->returns the number of elements present in the tuple
    cout << tuple_size<decltype(t1)>::value << endl;

    // tie() -> unpacks its values to the variables in same order
    t4=make_tuple('c',10);
    // without 'ignore'
    int a;
    char ch;
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