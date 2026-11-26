#include <iostream>
#include <string>
using namespace std;

// Global variable
int globalValue = 100;

// 1. No parameters, no return value
void displayMessage()
{
   cout << "Welcome to Function Analyzer!" << endl;
}

// 2. No parameters, with return value
int getNumber()
{
   return 10;
}

// 3. Parameters, no return value
void displaySum(int a, int b)
{
   cout << "Sum = " << a + b << endl;
}

// 4. Parameters, with return value
int multiply(int a, int b)
{
   return a * b;
}

// Call by value
void callByValue(int x)
{
   x = x + 10;
   cout << "Inside callByValue: " << x << endl;
}

// Call by reference
void callByReference(int &x)
{
   x = x + 10;
   cout << "Inside callByReference: " << x << endl;
}

// Function overloading
void displayStudent(string name)
{
    cout << "Name: " << name << endl;
}

void displayStudent(string name, string branch)
{
  cout << "Name: " << name << endl;
  cout << "Branch: " << branch << endl;
}

void displayStudent(string name, string branch, float percentage)
{
  cout << "Name: " << name << endl;
  cout << "Branch: " << branch << endl;
  cout << "Percentage: " << percentage << "%" << endl;
}

void showScope()
{
  int localValue = 50;
  cout << "Local variable: " << localValue << endl;
  cout << "Global variable: " << globalValue << endl;
}

int main()
{
   cout << "FUNCTION DESIGN AND PARAMETER PASSING ANALYZER\n\n";

    // Part A: Function design
    displayMessage();

    cout << "Returned number = " << getNumber() << endl;
    displaySum(10, 20);
    cout << "Multiplication = " << multiply(4, 5) << endl;

    // Part B: Parameter passing
    int number = 5;

    cout << "\nCall by Value\n";
    cout << "Before function: " << number << endl;
    callByValue(number);
    cout << "After function: " << number << endl;

    cout << "\nCall by Reference\n";
    cout << "Before function: " << number << endl;
    callByReference(number);
    cout << "After function: " << number << endl;

    // Part C: Scope and visibility
    cout << "\nScope and Visibility\n";
    showScope();
    cout << "Global variable outside function: "
        << globalValue << endl;

    // Part D: Function overloading
    cout << "\nFunction Overloading\n";
    displayStudent("Amit");
    cout << endl;
    displayStudent("Riya", "CE");
    cout << endl;
    displayStudent("Palak", "CE", 85.20);

    return 0;
}
