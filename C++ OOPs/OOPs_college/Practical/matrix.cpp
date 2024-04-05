#include <iostream>
#include <cstdio>
using namespace std;

// OOPs Practical 05
// WAP to find the addition & multiplication of two matices

int main()
{
    int row, col;
    cout << "Enter the matrix size" << endl;
    cout << "Rows==>";
    cin >> row;
    cout << "Coloumns==>";
    cin >> col;
    int A[row][col], B[row][col], Sum[row][col], temp[row][col];
    int mul, Mul[row][col];
    cout << "Enter the elements of the 1st matrix" << endl;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << "a" << i + 1 << j + 1 << ": ";
            cin >> A[i][j];
        }
    }
    cout << "Enter the elements of the 2nd matrix" << endl;
    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < col; j++)
        {
            cout << "a" << i + 1 << j + 1 << ": ";
            cin >> B[i][j];
        }
    }
    cout << "The Addition of two matrices is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose of matrix B
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            temp[i][j] = B[j][i];
        }
    }

    for (int i = 0; i < row; i++)
    {      
        for (int j = 0; j < col; j++)
        {
            mul = 0;
            for (int z = 0; z < col; z++)
            {
                mul += (A[i][z] * temp[j][z]);
            }
            Mul[i][j] = mul;            
        }
    }
    cout << "The Multiplication of two matrices is " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<Mul[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}