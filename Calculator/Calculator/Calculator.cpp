#include <iostream>
#include <iomanip>
#include <cmath>
#include<stdio.h>
#include <string.h>
#include<conio.h>

using namespace std;

double additionFunction(double num1, double num2);
double multiplicationFunction(double num1, double num2);
double divisionFunction(double num1, double num2);
double subtractionFunction(double num1, double num2);
double logicalFunction(double num1);

int main()
{
    double num1, num2;
    char choice;
 

    cout << "------------------" << "WELCOME TO MY CALCULATOR" << "-------------------------\n\n\n\n\n" << endl;
    A:

    cout << "Options for operation\n\n";
    cout << setw(4) <<"1) Addition of two numbers. \n";
    cout << setw(4) <<"2) Multiplication of two numbers. \n";
    cout << setw(4) <<"3) Division of two numbers. \n";
    cout << setw(4) <<"4) Subtraction of two numbers. \n";
    cout << setw(4) <<"5) Logical operations\n";
    cout << setw(4) <<"6) Exit the program.\n\n";
    cout << setw(4) <<" Enter a number to perform any of the operations listed above : ";
    cin >> choice;
    system("cls");


    switch (choice)
    {
    case '1':
        cout << "Addition of two numbers" << endl;

        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;
        cout << additionFunction(num1, num2);
            break;

    case '2':
        cout << "Multiplication of two numbers" << endl;

        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;
        cout << multiplicationFunction(num1, num2);
        break;
    case '3':
        cout << "Division  of two numbers" << endl;

        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;
        cout << divisionFunction(num1, num2);
        break;
    case '4':
        cout << "Subtraction of two numbers" << endl;

        cout << "Enter the first number : ";
        cin >> num1;
        cout << "Enter the second number : ";
        cin >> num2;
        cout << subtractionFunction(num1, num2);
        break;
    case '5':

        cout << "Enter a number : ";
        cin >> num1;
        cout<< logicalFunction(num1);

    case '6':
        exit(0);
        break;
    default:
        cout << "Enter a right number" << endl;
        break;
    }

    cout << "\n\nDo you want to continue y(Y) or No(n) \n";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
        goto A;
    else if (choice == 'n' || choice == 'N')
        system("cls");
    cout << "Thank you and good bye : " << endl;
    exit(0);


}

double additionFunction(double num1, double num2) {
    return num1 + num2;
}

double multiplicationFunction(double num1, double num2) {
    return num1 * num2;
}
double divisionFunction(double num1, double num2) {
    return num1 / num2;
}

double subtractionFunction(double num1, double num2) {
    return num1 - num2;
}
double logicalFunction(double num1) {
    return cos(num1);

}
