#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double add(double x, double y);
double subtract(double x, double y);
double division(double x, double y);
double multiplication(double x, double y);
double moduluous(double x, double y);

int main()
{
    cout << "------------Mini Calculator------------" << endl;
    char ch = 'y';
    do
    {
        double a, b;

        cout << "Enter your first number: ";
        cin >> a;
        cout << "Enter your second number: ";
        cin >> b;
        cout << endl;

        cout << "Choose your operation! " << endl;
        int choice;
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Division\n";
        cout << "4. Multiplication\n";
        cout << "5. Moduluous\n";

        cout << "Enter choice no: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "The Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "The Result: " << subtract(a, b)<<endl;
            break;
        case 3:
            cout << "The Result: " << division(a, b)<<endl;
            break;
        case 4:
            cout << "The Result: " << multiplication(a, b)<<endl;
            break;
        case 5:
            cout << "The Result: " << moduluous(a, b)<<endl;
            break;
        default:
            cout << "Invalid operation, please check your choice again!";
        }
        cout << "Do you wanna run it again? (y/n): ";
        cin >> ch;
    } while (ch != 'n');
    cout << "Exiting Calculator..... Goodbye!";

    cout << "\n";

    return 0;
}

double add(double x, double y)
{
    return x + y;
}

double subtract(double x, double y)
{
    return x - y;
}

double multiplication(double x, double y)
{
    return x * y;
}

double division(double x, double y)
{
    if (y == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return x / y;
}

double moduluous(double x, double y)
{
    if (y == 0)
    {
        cout << "Error: Modulus by zero!" << endl;
        return 0;
    }
    return fmod(x, y);
}
