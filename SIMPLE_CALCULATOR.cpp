/*Develop a calculator program that performs basic arithmetic
operations such as addition, subtraction, multiplication, and
division. Allow the user to input two numbers and choose an
operation to perform.
  */

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Calculator" << endl;
    cout<<"Mention the number of times you want to use the SIMPLE CALCULATOR:"<<endl;
    int n;cin>>n;
    cout<<endl;
for(int i=0;i<n;i++)
{
    cout<<"Working No.:"<<i+1<<endl;

    // Input the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Input the operation
    cout << "Enter the operation (+, -, *, /): ";
    cin >> operation;

    // Input the second number
    cout << "Enter the second number: ";
    cin >> num2;

    double result;

    // Perform the selected operation
    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed." << endl;
                return 1; // Exit the program with an error status
            }
            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1; // Exit the program with an error status
    }

    // Display the result
    cout << "Result: " << result << endl;
    cout<<endl;}

    return 0;
}

