#include <iostream>
#include <iomanip>
using namespace std;
int main() {
 string enrol, name, branch, mobile;
 int semester;
 cout << "Enrollment number: ";
 cin >> enrol;
 cin.ignore();
 cout << "Student name: ";
 getline(cin, name);
 cout << "Branch: ";
 cin >> branch;
 cout << "Semester: ";
 cin >> semester;
 cout << "Mobile: ";
 cin >> mobile;
 cout << "\n--- Student Information ---\n";
 cout << "Enrollment: " << enrol ;
 cout<< "\nName: " << name ;
 cout<< "\nBranch: " << branch ;
 cout<< "\nSemester: " << semester;
 cout<< "\nMobile: " << mobile << endl;
 return 0;
}
