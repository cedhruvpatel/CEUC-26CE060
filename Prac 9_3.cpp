#include <iostream>
using namespace std;

int main()
{
    cout << "********************************************\n";
    cout << " MEMORY ORGANIZATION ANALYZER\n";
    cout << "********************************************\n";

    // Stack Memory
    int localVar = 100;

    cout << "--------------- Stack Memory ----------------\n";
    cout << "Local Variable Value\n";
    cout << localVar << endl;

    cout << "Memory Address\n";
    cout << &localVar << endl;
    cout << "---------------------------------------------\n";

    // Dynamically Allocated Memory
    int *dynamicPtr = new int;
    *dynamicPtr = 250;

    cout << "--------------- Dynamically Allocated Memory ------------\n";
    cout << "Allocated Value\n";
    cout << *dynamicPtr << endl;

    cout << "Memory Address\n";
    cout << dynamicPtr << endl;
    cout << "---------------------------------------------\n";

    // Multi-level Referencing
    int value = 50;
    int *ptr1 = &value;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    cout << "----------- Multi-level Referencing ----------\n";
    cout << "Original Value\n";
    cout << value << endl;

    cout << "Single-level Address\n";
    cout << ptr1 << endl;

    cout << "Double-level Address\n";
    cout << ptr2 << endl;

    cout << "Triple-level Address\n";
    cout << ptr3 << endl;

    cout << "Value Accessed through Three Levels\n";
    cout << ***ptr3 << endl;
    cout << "---------------------------------------------\n";

    // Memory Safety
    int *nullPtr = nullptr;

    cout << "--------------- Memory Safety ----------------\n";
    cout << "Null Reference\n";

    if (nullPtr == nullptr)
        cout << "Safe (Reference is NULL)\n";

    cout << "---------------------------------------------\n";

    // Invalid Reference
    delete dynamicPtr;
    dynamicPtr = nullptr;

    cout << "Invalid Reference\n";
    cout << "Memory Released Successfully\n";
    cout << "Reference Invalid\n";
    cout << "---------------------------------------------\n";

    // Uninitialized Pointer
    int *uninitializedPtr;

    cout << "Uninitialized Address Variable\n";
    cout << "Unsafe to Access\n";
    cout << "---------------------------------------------\n";

    return 0;
}
