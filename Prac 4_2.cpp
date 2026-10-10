#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int marks,avg;
    cout<<"************************************************"<<endl;
     cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
      cout<<"************************************************"<<endl;
      cout<<"------------------------------------------"<<endl;
      cout<<"ACADEMIC SUMMARY"<<endl;
      cout<<"------------------------------------------"<<endl;
      cout<<"Total Marks"<<setw(10)<<":";
      cin>>marks;
      avg= marks/3;
      cout<<"Average Marks"<<setw(8)<<":"<<avg<<endl;
      cout<<"Percentage"<<setw(11)<<":"<<avg<<"%"<<endl;
      cout<<"------------------------------------------"<<endl;
      cout<<"ACADEMIC RESULT"<<endl;
      cout<<"------------------------------------------"<<endl;
      if(avg>=90&&avg<=100)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"O"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Outstanding"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else if(avg>=80&&avg<=89)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"A+"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Excellent"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else if(avg>=70&&avg<=79)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"A"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Very Good"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else if(avg>=60&&avg<=69)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"B+"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Good"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else if(avg>=50&&avg<=59)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"B"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Satisfactory"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else if(avg>=40&&avg<=49)
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Pass"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"C"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Needs Improvement"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
      else
      {
        cout<<"RESULT"<<setw(15)<<":"<<"Fail"<<endl;
        cout<<"GRADE"<<setw(16)<<":"<<"F"<<endl;
        cout<<"PERFORMANCE"<<setw(10)<<":"<<"Failed"<<endl;
        cout<<"------------------------------------------"<<endl;
      }
}
