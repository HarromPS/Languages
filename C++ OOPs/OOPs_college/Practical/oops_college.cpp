#include <iostream>
#include <cstdio>
#include <string>
#include <cstdlib>
using namespace std;
// OOPs Practical 02:
// Q2 Write a program using to process Shopping list for a departmental         
// store. The list include details such as code no & price of items
// an dperform operation of deletion, addition of items to list &
// printing total value of a order

class Shopping{
    
    int itemId[4];// A Shop has no. of products
   
    int itemprice[4]; // Shop products have price too
    int counter; // for the increment
public:
    void initcounter(void); // methods declared inside the class
    void setprice(void);
    void displayprice(void);
    void orderprice(void);
};

// When a method is defined for the private members we can privide them values
// we can access them as well 
// Defining the methods outside the class
void Shopping ::initcounter(void){
    counter = 0;
}
void Shopping ::setprice(void){
    cout << "Enter ID of your " << counter + 1 << " item " << endl;
    cin >> itemId[counter];
    cout << "Enter the price of your " << counter + 1 << " item: " << endl;
    cin >> itemprice[counter];
    counter++;// increment in the counter value, initally it is zero
}
void Shopping ::displayprice(void){
    cout << "Price of items with ID " << endl;
    for (int i = 0; i < counter; i++){
      cout << i + 1 << " ==> ID:" << itemId[i] << ", Price: " << itemprice[i] << endl;
    }
}
// displaying the total price of all items when ordered
void Shopping ::orderprice(void){
    cout << "The total price of the items ordered is:" << endl;
    int total = 0;
    for (int i = 0; i < counter; i++){
        total += itemprice[i];
    }
    cout << total << endl;
}

int main(){
    Shopping list;
    list.initcounter();
    cout << "Enter how many items you want: " << endl;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++){
        list.setprice();
    }
    list.displayprice();
    list.orderprice();
    return 0;
}