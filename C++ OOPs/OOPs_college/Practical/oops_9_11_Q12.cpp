#include <iostream>
#include <cstdlib>
using namespace std;

// Q12. Write a program for developing a matrix class which can handle integers
// matrices of different dimensions. Also overload for addition, multiplications,
// & comparison of two matrices.

class Matrix
{
    int m, n;

public:
    int data;
    void setValue(int m, int n)
    {
    }
    Matrix operator+(Matrix &);
    Matrix operator*(Matrix &);
    Matrix operator==(Matrix &);
};
// Defining the operator method outside the class for addition
Matrix Matrix::operator+(Matrix &obj2)
{
    Matrix temp;
    temp.data = data + obj2.data;

    return temp;
}
// Defining the operator method outside the class for multiplication
Matrix Matrix::operator*(Matrix &obj2)
{

    Matrix temp;
    temp.data = 0;
    temp.data = data * obj2.data;
    return temp;
}
// Defining the operator method outside the class for comparison
Matrix Matrix::operator==(Matrix &obj2)
{
    Matrix temp;
    if(data == obj2.data)
    {
        temp.data=1;
        return temp;
    }
    else{
        cout<<"The element is not matched"<<endl;
    }

    return temp;
}
void Display(Matrix obj[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << obj[i][j].data << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m1 = 2, n1 = 2,Temp[2][2];
    Matrix c, A[m1][n1], B[m1][n1], C[2][2], D[2][2];
    int temp[2][2];
    cout << "Enter the elements of matrix A" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << "a" << i + 1 << j + 1 << ": ";
            cin >> A[i][j].data;
        }
    }
    cout << "Enter the elements of matrix B" << endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << "a" << i + 1 << j + 1 << ": ";
            cin >> B[i][j].data;
        }
    }
    cout<<"The comparison of two matrices results says that: "<<endl;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            C[i][j] = A[i][j] == B[i][j];
        }
    }
    Display(C);
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // transpose
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            temp[i][j] = B[j][i].data;
        }
    }
    // transpose
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            B[i][j].data = temp[i][j];
        }
    }
    int t;
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            t = 0;
            for (int z = 0; z < 2; z++)
            {
                D[i][j] = A[i][j] * B[i][z];
            }
        }
    }
    cout << "The addition of the elements of two matrices is" << endl;
    Display(C);
    
    cout << "The multiplication of the elements of two matrices is" << endl;
    Display(D);
    return 0;
}