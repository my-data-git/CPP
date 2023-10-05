#include <iostream>
using namespace std;
class date
{
private:
   int day, month, year;

public:
   date()
   {
      this->day = 1, this->month = 12, this->year = 2001;
   }
   date(int d, int m, int y)
   {
      this->day = d, this->month = m, this->year = y;
   }
   int get_day()
   {
      return this->day;
   }
   void set_day(int d)
   {
      this->day = d;
   }
   int get_month()
   {
      return this->month;
   }
   void set_month(int m)
   {
      this->month = m;
   }
   int get_year()
   {
      return this->year;
   }
   void set_year(int y)
   {
      this->year = y;
   }
   bool isLeapYear()
   {
      bool check = false;
      if ((year % 4) == 0)
      {
         check = true;
      }

      if ((year % 100) == 0)
      {
         if ((year % 400) == 0)
         {
            check = true;
         }
         else
         {
            check = false;
         }
      }

      return check;
   }
   void display()
   {
      cout << "--------------------Date is---------" << endl;
      cout << this->day << "-" << this->month << "-" << this->year << endl;
      cout << "------------------------------------" << endl;
   }
   void accept()
   {
      cout << "Enter DD:MM:YYYY" << endl;
      cin >> this->day >> this->month >> this->year;
   }
};
class person
{
private:
   string name, addr;
   date birth_date;

public:
   person()
   {
      this->name = this->addr = "";
      this->birth_date;
   }
   person(string n, string ad, int d, int m, int y)
   {
      this->name = n;
      this->addr = ad;
      this->birth_date.set_day(d);
      this->birth_date.set_month(m);
      this->birth_date.set_year(y);
   }
   void set_name(string n)
   {
      this->name = n;
   }
   void set_addr(string ad)
   {
      this->addr = ad;
   }
   void set_date(int d, int m, int y)
   {
      this->birth_date.set_day(d);
      this->birth_date.set_month(m);
      this->birth_date.set_year(y);
   }
   date get_birth_date()
   {
      return this->birth_date;
   }
   string get_name()
   {
      return this->name;
   }
   string get_addr()
   {
      return this->addr;
   }
   virtual void display()
   {

      cout << "Person Name : " << this->name << "\nPerson Address : " << this->addr << endl;
      cout << "Person birth date : = \n";
      birth_date.display();
   }
   virtual void accept()
   {
      cout << "Enter details \n";
      cout << "Enter Person Name : ";
      cin >> this->name;
      cout << "\nEnter Address : ";
      cin >> this->addr;
      this->birth_date.accept();
      cout << endl;
   }
};
class employee : public person
{
protected:
   int id;
   float sal;
   string dept;
   date joining;

public:
   employee()
   {
      this->id = 0;
      this->sal = 0.0;
      this->dept = "";
   }
   employee(int id, float sal, string d, int dd, int m, int y)
   {
      this->id = id;
      this->sal = sal;
      this->dept = d;
      this->joining.set_day(dd);
      this->joining.set_day(m);
      this->joining.set_day(y);
   }
   int get_id()
   {
      return this->id;
   }
   void set_id(int id)
   {
      this->id = id;
   }
   float get_sal()
   {
      return this->sal;
   }
   void set_sal(float sal)
   {
      this->sal = sal;
   }
   string get_dept()
   {
      return this->dept;
   }
   void set_dept(string dp)
   {
      this->dept = dp;
   }
   date get_joining()
   {
      return joining;
   }
   date set_joining(date dd)
   {
      joining = dd;
   }
   void display()
   {

      cout << "Employee Id : " << this->id << "\nEmployee Salary : " << this->sal << "\nEmployee dept : " << this->dept;
      cout << "Employee Joining date : =";
      joining.display();
   }
   void accept()
   {
      cout << "Enter details \n";
      cout << "Employee Id : ";
      cin >> this->id;
      cout << "\nEmployee Salary : ";
      cin >> this->sal;
      cout << "\nEmployee Dept : ";
      cin >> this->dept;
      joining.accept();
      cout << endl;
   }
};
int main()
{
   
}