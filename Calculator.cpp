#include<iostream>
using namespace std;

int addition();
int subtraction();
int multiplication();
int division();
int modulo();

int main() {
    char value;
    char again;

    do {
        cout << "-------Welcome to Our Calculator Application-------------" << endl;
        cout << "**************Please follow the instructions**************" << endl;
        cout << "(1) Please press a for addition" << endl;
        cout << "(2) Please press s for subtraction" << endl;
        cout << "(3) Please press m for multiplication" << endl;
        cout << "(4) Please press d for division" << endl;
        cout << "(5) Please press o for modulo" << endl;
        
        cin >> value;

        switch(value) {
            case 'a':
            case 'A': {
                int addValue = addition();
                cout << "Addition result is: " << addValue << endl;
                break;
            }
            case 's':
            case 'S': {
                int subValue = subtraction();
                cout << "Subtraction result is: " << subValue << endl;
                break;
            }
            case 'm':
            case 'M': {
                int mulValue = multiplication();
                cout << "Multiplication result is: " << mulValue << endl;
                break;
            }
            case 'd':
            case 'D': {
                int divValue = division();
                cout << "Division result is: " << divValue << endl;
                break;
            }
            case 'o':
            case 'O': {
                int modValue = modulo();
                cout << "Modulo result is: " << modValue << endl;
                break;
            }
            default:
                cout << "Invalid input. Please try again." << endl;
        }

        cout << "Do you want to use our application again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Thank you for using our application!" << endl;

    return 0;
}

// Addition Operation
int addition() {
    int a, total = 0;
    char choice;
    do {
        cout << "Enter a number: ";
        cin >> a;
        total += a;
        cout << "Do you want to add more numbers? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return total;
}

// Subtraction Operation
int subtraction() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    return a - b;
}

// Multiplication Operation
int multiplication() {
    int a, total = 1;
    char choice;
    do {
        cout << "Enter a number: ";
        cin >> a;
        total *= a;
        cout << "Do you want to multiply more numbers? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    return total;
}

// Division Operation
int division() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
    return a / b;
}

// Modulo Operation
int modulo() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (b == 0) {
        cout << "Error! Modulo by zero." << endl;
        return 0;
    }
    return a % b;
}
