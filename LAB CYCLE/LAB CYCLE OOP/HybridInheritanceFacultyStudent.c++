#include<iostream>
using namespace std;

class Person
{
     int id;
     char name[200];
     public:
          void PersonRead()
          {
               cout<<"\n -------------------------------------------------- \n";
               cout<<"\n Enter Id               :  ";
               cin>>id;
               cout<<"\n Enter Name             :  ";
               cin>>name;
          }
          void PersonDisplay()
          {
               cout<<"\n -------------------------------------------------- \n";
               cout<<"\n Id                     :  "<<id;
               cout<<"\n Name                   :  "<<name;
          }
};

class Faculty : public Person
{
     char subject_name[100];
     char teacher_name[200];
     public:
          void teacherRead()
          {
               PersonRead();
               cout<<"\n Enter Subject Name     :  ";
               cin>>subject_name;
               cout<<"\n Enter Teacher Name     :  ";
               cin>>teacher_name;
          }
          void teacherDisplay()
          {
               PersonDisplay();
               cout<<"\n Subject Name           :  "<<subject_name;
               cout<<"\n Teacher Name           :  "<<teacher_name;
          }
};

class Student : public Person
{
     char dept_name[200];
     char sname[200];
     public:
          void studentRead()
          {
               cout<<"\n Enter Department Name  :  ";
               cin>>dept_name;
               cout<<"\nEnter student name       :  ";
               cin>>sname;
          }
          void studentDisplay()
          {
               cout<<"\n Department Name        :  "<<dept_name;
               cout<<"\nStudent Name		    :	"<<sname;
          }
};

class TA : public Student, public Faculty
{
     public:
          void TAread()
          {
               teacherRead();
               studentRead();
          }
          void TAdisplay()
          {
               teacherDisplay();
               studentDisplay();
          }
};

int main()
{
     TA *t;
     int c, i;
     cout<<"\n Enter no. of TA details to be there ?  :  ";
     cin>>c;
     t=new TA[c];
     for(i=0; i<c; i++)
     {
          t[i].TAread();
     }
     for(i=0; i<c; i++)
     {
          t[i].TAdisplay();
     }
     return 0;
}
