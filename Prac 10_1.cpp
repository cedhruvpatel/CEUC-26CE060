#include <iostream>
#include <fstream>
#include <climits>

using namespace std;

int globalVal = 100;

int main() {
    cout << "********************************************" << endl;
    cout << " PROGRAM EXECUTION & ERROR HANDLING ANALYZER" << endl;
    cout << "********************************************" << endl << endl;

    int localVal = 200;
    int *dynamicVal = new int(300);

    cout << "Compile-time and Run-time Memory" << endl;
    cout << "Global Variable Value : " << globalVal << endl;
    cout << "Local Variable Value  : " << localVal << endl;
    cout << "Dynamic Memory Value  : " << *dynamicVal << endl;
    delete dynamicVal;
    dynamicVal = nullptr;


    cout << "\nLow-level Error Demonstration" << endl;
    short overflowTest = SHRT_MAX;
    overflowTest += 1;
    cout << "Arithmetic Overflow Observed" << endl;

    cout << "\nPointer Aliasing" << endl;
    int sharedTarget = 50;
    int *ptrA = &sharedTarget;
    int *ptrB = &sharedTarget;
    cout << "Original Value: " << *ptrA << endl;
    *ptrB = 75;
    cout << "Updated Value : " << *ptrA << endl;
    cout << "Both Address Variables Refer to the Same Memory Location" << endl;

    cout << "\nMemory Leak Demonstration" << endl;
    int *leakDemo = new int(400);
    cout << "Dynamic Memory Allocated" << endl;
    delete leakDemo;
    leakDemo = nullptr;
    cout << "Memory Released Successfully" << endl;


    cout << "\nArithmetic Operation" << endl;
    int dividend = 25, divisor = 0;
    cout << "Enter Dividend: " << dividend << endl;
    cout << "Enter Divisor: " << divisor << endl;
    if (divisor == 0) {
        cout << "Error: Division by Zero is not Allowed." << endl;
    } else {
        cout << "Result: " << (dividend / divisor) << endl;
    }

    cout << "\nFile Operation" << endl;
    ifstream nonExistentFile("non_existent_system_file_xyz.txt");
    if (!nonExistentFile.is_open()) {
        cout << "Unable to Open File." << endl;
    } else {
        nonExistentFile.close();
    }

    cout << "\nProgram Executed Successfully" << endl;
    return 0;
}
