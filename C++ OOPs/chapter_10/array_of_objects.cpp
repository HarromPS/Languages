#include <iostream>
#include <cstdio>
using namespace std;

// Array of Objects
class shopItem
{
    int id;
    int item_price;

public:
    void getData()
    {
        cout << "The item ID is: " << id << endl;
        cout << "The item price is: " << item_price << endl;
    }
    void setData(int a, int b)
    {
        id = a;
        item_price = b;
    }
};
int main()
{
    // Array of Objects ....

    int n;
    cout << "Enter the items in your list" << endl;
    cin >> n;

    // memory allocated say for 3 size of array of data type shopitem
    // ptr stores the address of 1st element of the array and further
    // elements can be accessed using ptr++
    shopItem *ptr = new shopItem[n];
    int i,x,y;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the item ID and Price of "<<i+1<<" item "<<endl;
        cin>>x>>y;
        // (*ptr).setData(x,y);
        ptr->setData(x,y);
        ptr+i;
    }
    for (int i = 0; i < n; i++)
    {
        ptr->getData();
        ptr+i;
    }


    shopItem* ptr2 = new shopItem[n];

    // ptr_temp points to ptr
    shopItem* ptr_temp=ptr;

    int j,x2,y2;
    for (int j = 0; j < n; j++)
    {
        cout<<"Enter the item ID and Price of "<<j+1<<" item "<<endl;
        cin>>x2>>y2;
        (*ptr).setData(x,y);
        ptr2->setData(x2,y2);
        cout<<ptr2+(j+1)<<endl;
    }
    for (int j = 0; j < n; j++)
    {
        // ptr2->getData();
        cout<<ptr2+j<<endl;
    }

    return 0;
}