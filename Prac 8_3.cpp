#include <iostream>
using namespace std;


void print1ToN(int n);
void printNTo1(int n);


int reverseNumber(int n, int rev = 0);
int sumOfDigits(int n);


void decimalToBinary(int n);

int main() {
    int n, num, decimalNum;

    cout << "********************************************\n";
    cout << "         RECURSIVE UTILITY ANALYZER         \n";
    cout << "********************************************\n";


    cout << "\n----------- Part A: Recursive Traversal -----------\n";
    cout << "Enter a positive integer (N) : ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
    } else {
        cout << "Numbers from 1 to " << n << "          : ";
        print1ToN(n);
        cout << "\n";

        cout << "Numbers from " << n << " to 1          : ";
        printNTo1(n);
        cout << "\n";
    }


    cout << "\n------- Part B: Recursive Number Processing -------\n";
    cout << "Enter a positive integer     : ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer greater than 0.\n";
    } else {
        cout << "Reversed Number              : " << reverseNumber(num) << "\n";
        cout << "Sum of Digits                : " << sumOfDigits(num) << "\n";
    }


    cout << "\n------- Part C: Recursive Number Conversion -------\n";
    cout << "Enter a decimal number       : ";
    cin >> decimalNum;

    if (decimalNum < 0) {
        cout << "Please enter a non-negative decimal integer.\n";
    } else {
        cout << "Binary Representation        : ";
        decimalToBinary(decimalNum);
        cout << "\n";
    }

    cout << "\n--------------------------------------------\n";
    cout << "Program Executed Successfully.\n";
    cout << "--------------------------------------------\n";

    return 0;
}


void print1ToN(int n) {
    if (n == 0) {
        return;
    }
    print1ToN(n - 1);
    cout << n << " ";
}


void printNTo1(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printNTo1(n - 1);
}


int reverseNumber(int n, int rev) {
    if (n == 0) {
        return rev;
    }
    return reverseNumber(n / 10, (rev * 10) + (n % 10));
}


int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sumOfDigits(n / 10);
}


void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
    cout << (n % 2);
}
