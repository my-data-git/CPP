/*Q2. Implement following classes. Test all functionalities in main() of each created class. Note that
employee is inherited into manager and salesman. Insted of char[] use string datatype.*/
#include <iostream>
using namespace std;

class employee
{
protected:
    int id;
    float sal;

public:
    employee()
    {

        this->id = 0;
        this->sal = 0.0;
    }
    employee(int id, float sal)
    {

        this->id = id;
        this->sal = sal;
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
    void display()
    {
        cout << "Employee Id : " << this->id << "\nEmployee Salary : " << this->sal << endl;
    }
    void accept()
    {
        cout << "Employee Id : ";
        cin >> this->id;
        cout << "\nEmployee Salary : ";
        cin >> this->sal;
        cout << endl;
    }
};
class manager : virtual public employee
{
protected:
    float bonus;

public:
    manager()
    {

        this->bonus = 0.0;
    }
    manager(int id, float sal, float bonus)
    {
        employee::set_id(id);
        set_sal(sal);
        this->bonus = bonus;
    }
    float get_bonus()
    {
        return this->bonus;
    }
    void set_bonus(float bonus)
    {
        this->bonus = bonus;
    }
    void display()
    {
        employee ::display();
        cout << "\nManager bonus : " << this->bonus << endl;
    }
    void accept()
    {
        employee::accept();
        cout << "\nManager bonus : ";
        cin >> this->bonus;
        cout << endl;
    }

protected:
    void display_manager()
    {
        cout << "\nManager bonus : " << this->bonus << endl;
    }
    void accept_manager()
    {

        cout << "\nManager bonus : ";
        cin >> this->bonus;
        cout << endl;
    }
};
class salesman : virtual public employee
{
protected:
    float comm;

public:
    salesman()
    {

        this->comm = 0;
    }
    salesman(int id, float sal, float comm)
    {
        set_id(id);
        set_sal(sal);
        this->comm = comm;
    }

    float get_comm()
    {
        return this->comm;
    }
    void set_comm(float comm)
    {
        this->comm = comm;
    }
    void display()
    {
        employee ::display();
        cout << "\nSalesman commission : " << this->comm << endl;
    }
    void accept()
    {
        employee::accept();
        cout << "\nSalesman commission : ";
        cin >> this->comm;
        cout << endl;
    }

protected:
    void display_salesman()
    {
        cout << "\nSalesman commission : " << this->comm << endl;
    }
    void accept_salesman()
    {

        cout << "\nSalesman commission : ";
        cin >> this->comm;
        cout << endl;
    }
};
class sales_manager : public manager, public salesman
{
public:
    sales_manager()
    {
    }
    sales_manager(int id, float sal, float bonus, float comm)
    {
        set_id(id);
        set_sal(sal);
        set_bonus(bonus);
        set_comm(comm);
    }
    void display()
    {
        employee::display();
        manager::display_manager();
        salesman::display_salesman();
    }
    void accept()
    {
        manager::accept();
        salesman::accept_salesman();
        cout << endl;
    }
};
int main()
{
    employee e1;
    employee e2(1, 100);
    manager m1;
    manager m2(2, 200, 10);
    salesman s1;
    salesman s2(3, 150, 50);
    sales_manager sm1;
    sales_manager sm2(10, 10, 10, 10);

    e2.display();
    e2.accept();
    cout << "Employee id : " << e2.get_id() << endl;
    cout << "Employee salary : " << e2.get_sal() << endl;
    e2.set_id(10);
    e2.set_sal(1000);
    e2.display();

    m2.display();
}
