#include <iostream>
#include <iomanip>
using namespace std;


struct CompositeA
{
    int integerValue;
    double floatingValue;
    char characterValue;
    int extraValue;
};


union CompositeB
{
    int integerValue;
    float floatingValue;
    char characterValue;
    char data[16];
};

int main()
{
    cout << "********************************************" << endl;
    cout << " COMPOSITE DATA REPRESENTATION ANALYZER" << endl;
    cout << "********************************************" << endl;


    CompositeA a;

    cout << "--------------- Composite Data Type A ----------------" << endl;
    cout << "Size : " << sizeof(a) << " Bytes" << endl;
    cout << "--------------------------------------------" << endl;


    CompositeB b;

    cout << "--------------- Composite Data Type B ----------------" << endl;
    cout << "Size : " << sizeof(b) << " Bytes" << endl;
    cout << "--------------------------------------------" << endl;


    cout << "Padding and Alignment Observed" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Shared Memory Representation" << endl;

    b.integerValue = 120;
    cout << "Integer Value : " << b.integerValue << endl;

    b.floatingValue = 120.00f;
    cout << fixed << setprecision(2);
    cout << "Floating Value : " << b.floatingValue << endl;

    b.characterValue = 'x';
    cout << "Character Value : " << b.characterValue << endl;

    b.floatingValue = 250.50f;

    cout << "After Updating Floating Value" << endl;
    cout << "Integer Value Changed" << endl;
    cout << "Character Value Changed" << endl;

    cout << "--------------------------------------------" << endl;


    cout << "Trade-off Analysis" << endl;

    cout << "Structure" << endl;
    cout << "Separate Memory for Every Member" << endl;
    cout << "Suitable for Storing Complete Records" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Union" << endl;
    cout << "Shared Memory for All Members" << endl;
    cout << "Suitable for Memory-efficient Applications" << endl;
    cout << "--------------------------------------------" << endl;

    cout << "Program Executed Successfully" << endl;

    return 0;
}
