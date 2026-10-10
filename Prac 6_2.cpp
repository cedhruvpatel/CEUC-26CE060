#include <iostream>
#include <string>
using namespace std;

struct Student
{
    string enrollment;
    string name;
    float percentage;
    string grade;
};

void display(Student s[], int n)
{
    cout << "\n----------------------------------\n";

    for (int i = 0; i < n; i++)
    {
        cout << s[i].enrollment << "  "
             << s[i].name << "  "
             << s[i].percentage << "  "
             << s[i].grade << endl;
    }
}

int main()
{
    Student s[100];
    int n;

    cout << "Enter Number of Students : ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Enrollment : ";
        cin >> s[i].enrollment;

        cin.ignore();

        cout << "Name : ";
        getline(cin, s[i].name);

        cout << "Percentage : ";
        cin >> s[i].percentage;

        cout << "Grade : ";
        cin >> s[i].grade;
    }

    display(s, n);

    // Insert
    int position;

    cout << "\nEnter Position for Insertion : ";
    cin >> position;

    if (position >= 1 && position <= n + 1)
    {
        for (int i = n; i >= position; i--)
            s[i] = s[i - 1];

        cout << "Enrollment : ";
        cin >> s[position - 1].enrollment;

        cin.ignore();

        cout << "Name : ";
        getline(cin, s[position - 1].name);

        cout << "Percentage : ";
        cin >> s[position - 1].percentage;

        cout << "Grade : ";
        cin >> s[position - 1].grade;

        n++;

        cout << "\nRecord Inserted Successfully.\n";
    }

    display(s, n);

    // Update
    string searchEnrollment;

    cout << "\nEnter Enrollment Number to Update : ";
    cin >> searchEnrollment;

    for (int i = 0; i < n; i++)
    {
        if (s[i].enrollment == searchEnrollment)
        {
            cout << "New Percentage : ";
            cin >> s[i].percentage;

            cout << "New Grade : ";
            cin >> s[i].grade;

            cout << "Record Updated Successfully.\n";
        }
    }

    // Delete
    cout << "\nEnter Position to Delete : ";
    cin >> position;

    if (position >= 1 && position <= n)
    {
        for (int i = position - 1; i < n - 1; i++)
            s[i] = s[i + 1];

        n--;

        cout << "Record Deleted Successfully.\n";
    }

    display(s, n);

    return 0;
}
