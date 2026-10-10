#include <iostream>
using namespace std;

int main()
{
    cout << "********************************************\n";
    cout << " MEMORY ADDRESS EXPLORER\n";
    cout << "********************************************\n";

    int num = 25;
    char ch = 'A';
    float f = 85.60;

    cout << "------------ Variable Information ------------\n";

    cout << "Integer Value : " << num << endl;
    cout << "Memory Address : " << &num << endl;
    cout << "----------------------------------------------\n";

    cout << "Character Value : " << ch << endl;
    cout << "Memory Address : " << (void*)&ch << endl;
    cout << "----------------------------------------------\n";

    cout << "Floating Value : " << f << endl;
    cout << "Memory Address : " << &f << endl;
    cout << "----------------------------------------------\n";

    int *ptr = &num;

    cout << "Indirect Referencing\n";
    cout << "Stored Value : " << *ptr << endl;

    *ptr = 30;

    cout << "Modified Value : " << num << endl;
    cout << "----------------------------------------------\n";

    int arr[5] = {10, 20, 30, 40, 50};

    cout << "Sequential Data Collection\n";
    cout << "Array using Index\n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Array using Address-based Access\n";

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << " ";
    }

    cout << endl;
    cout << "----------------------------------------------\n";

    cout << "Observation\n";
    cout << "Both approaches access the same memory locations.\n";
    cout << "----------------------------------------------\n";

    return 0;
}
