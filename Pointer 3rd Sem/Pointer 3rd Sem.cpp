// Pointer 3rd Sem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void TakeInput(int*, int*);
int Sum(int,int);
int Mul(int, int);
void Display(int, int);
int main()
{
    int x=1;
    int y=3;
   
    TakeInput(&x,&y);
    int a =Sum(x, y);
    int b = Mul(x, y);
    Display(a, b);
}
void TakeInput(int *x, int *y) {
    cout << "Enter number 1: ";
    cin >> *x;
    cout << "Enter number 2: ";
    cin >> *y;
}
int Sum(int x, int y) {
    int c = x + y;
    return c;
}
int Mul(int x, int y) {
    int c = x * y;
    return c;
}
void Display(int a, int b) {
    cout << "Sum is: " << a << endl;
    cout << "Mul is: " << b << endl;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
