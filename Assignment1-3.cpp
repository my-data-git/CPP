/*Q3. Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();*/
#include <string>
using namespace std;
#include<iostream>
class Student
{
private:
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
    int n;
    
     
        do{
            printf("Enter 1) for Default date\nEnter 2) To Enter Student Details\nEnter any no. To Exit \n");
        scanf("%d",&n);
        if (n == 1 || n == 2)
            switch (n)
            {
            case 1:
                 s1.initStudent();
    s1.printfStudentOnConsole();
                break;
            case 2:                
             s1.acceptStudentFromConsole();
    s1.printfStudentOnConsole();
                break;
            }

    } while (n !=0);
}