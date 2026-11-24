#include <iostream>
#include <iomanip>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    string branch;
    int semester;
    float percentage;
    string grade;
};

string calculateGrade(float percentage)
{
    if (percentage >= 90)
        return "O";
    else if (percentage >= 85)
        return "A+";
    else if (percentage >= 80)
        return "A";
    else if (percentage >= 70)
        return "B";
    else if (percentage >= 60)
        return "C";
    else
        return "F";
}

void inputStudents(Student *ptr, int n)
{
    cout << "Enter Student Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << endl;

        cout << "Enrollment Number : ";
        cin >> (ptr + i)->enrollment;

        cin.ignore();

        cout << "Student Name : ";
        getline(cin, (ptr + i)->name);

        cout << "Branch : ";
        cin >> (ptr + i)->branch;

        cout << "Semester : ";
        cin >> (ptr + i)->semester;

        cout << "Percentage : ";
        cin >> (ptr + i)->percentage;

        (ptr + i)->grade = calculateGrade((ptr + i)->percentage);

        cout << "Grade : " << (ptr + i)->grade << endl;
        cout << "--------------------------------------------\n";
    }
}

void displayStudents(Student *ptr, int n)
{
    cout << "Student Records using Address-based Access\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Address : " << (void*)(ptr + i) << endl;

        cout << (ptr + i)->enrollment << " "
             << (ptr + i)->name << " "
             << (ptr + i)->branch << " "
             << (ptr + i)->semester << " "
             << fixed << setprecision(2) << (ptr + i)->percentage << " "
             << (ptr + i)->grade << endl;

        cout << "--------------------------------------------\n";
    }
}

void academicSummary(Student *ptr, int n)
{
    float total = 0;
    float highest = (ptr)->percentage;
    float lowest = (ptr)->percentage;

    for (int i = 0; i < n; i++)
    {
        total += (ptr + i)->percentage;

        if ((ptr + i)->percentage > highest)
            highest = (ptr + i)->percentage;

        if ((ptr + i)->percentage < lowest)
            lowest = (ptr + i)->percentage;
    }

    cout << "Academic Summary\n";
    cout << fixed << setprecision(2);

    cout << "Class Average Percentage : " << total / n << " %\n";
    cout << "Highest Percentage : " << highest << " %\n";
    cout << "Lowest Percentage : " << lowest << " %\n";
    cout << "--------------------------------------------\n";
}

int main()
{
    int n;

    cout << "********************************************\n";
    cout << " STUDENT RECORD MANAGEMENT SYSTEM\n";
    cout << "********************************************\n";

    cout << "Enter Number of Students : ";
    cin >> n;

    Student *ptr = new Student[n];

    cout << "Dynamic Memory Allocated Successfully\n";
    cout << "--------------------------------------------\n";

    inputStudents(ptr, n);
    displayStudents(ptr, n);
    academicSummary(ptr, n);

    delete[] ptr;
    ptr = nullptr;

    cout << "Dynamic Memory Released Successfully\n";
    cout << "Address Variable Reset Successfully\n";
    cout << "--------------------------------------------\n";

    cout << "Program Executed Successfully\n";
    cout << "--------------------------------------------\n";

    return 0;
}
