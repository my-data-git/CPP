/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/
#include <string>
using namespace std;
#include<iostream>
class Student{
    int marks,roll_no;
    string name;
    public:
void initStudent()
{
    roll_no=001;
    name="Sahil";
    marks=97;
}
void printfStudentOnConsole()
{
    cout<<"Student Roll no :- "<<roll_no<<"\nStudent Name :- "<<name<<"\nStudent Marks :- "<<marks<<"\n";
}
void acceptStudentFromConsole()
{
cout<<"Enter Student Roll no. :- \n";
    cin>>roll_no;
    cout<<"Enter Student Name :- \n";
    cin>>name;
    cout<<"Enter Student Marks :- \n";
    cin>>marks;
}
};
int main()
{
    Student s1;
    s1.initStudent();
    s1.printfStudentOnConsole();
    s1.acceptStudentFromConsole();
    s1.printfStudentOnConsole();
}