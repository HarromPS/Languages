#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;

// MEMORY ALLOCATION USING ARRAY IN C++

class Shop
{
    // A shop has no. of products
    int itemId[4];
    // Shop products have price too
    int itemprice[4];
    int counter; // for the increment

public:
    // methods declared inside the class
    void initcounter(void);
    void setprice(void);
    void displayprice(void);
};

// Defining the methods outside the class

void Shop ::initcounter(void)
{
    counter = 0;
}

// Setting the ID and Price of the items
void Shop ::setprice(void)
{
    cout << "Enter ID's of your products: " << endl;
    cin>>itemId[counter];
    cout<<"Enter the price of your item: "<<endl;
    cin>>itemprice[counter];
    
    // increment in the counter value, initally it is zero
    counter++;

}
// Displaying the IDs and Prices of the item 
void Shop :: displayprice(void)
{
    cout<<"Price of items with ID "<<endl;
    for(int i=0;i<counter;i++)
    {
        cout<<i+1<<" ==> "<<itemId[i]<<": "<<itemprice[i]<<endl;;
    }
}

int main()
{
    // Creating a driver program 
    // object created for Shop 
    Shop dukaan;

    // initializing item numbers for dukaan
    dukaan.initcounter();
    // setting for dukaan
    dukaan.setprice();      // setting for 3 items in dukaan
    dukaan.setprice();
    dukaan.setprice();

    dukaan.displayprice();



    
    return 0;
}