/*Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.
( write a menu driven code for it)*/
#include <iostream>
using namespace std;
class tollbooth
{
    unsigned int passcar;
    double cashtotal;

public:
    tollbooth()
    {
        this->passcar = 0;
        this->cashtotal = 0;
    }
    void payingCar()
    {
        cashtotal += 0.5;
        passcar++;
        cout << "inside car pass";
    }

    void nopayCar()
    {
        passcar++;
    }

    void printOnConsole()
    {
        cout << "----------------------------------------";
        cout << "Total amount of money collected : " << this->cashtotal << endl;
        cout << "Total Number of cars : " << this->passcar << endl;
        cout << "Number of Paying cars : " << this->cashtotal / 0.5 << endl;
        cout << "Number of Non Paying Cars : " << (this->passcar) - (this->cashtotal / 0.5) << endl;
        cout << "---------------------------------------";
    }
};
int menu()
{
    int choice;
    cout << "\n0. Exit the program." << endl;
    cout << "1. Car pass by Paying." << endl;
    cout << "2. Car pass by without paying." << endl;
    cout << "3. Display Total." << endl;
    cin >> choice;
    cout << "*******************" << endl;
    return choice;
}
int main()
{
    tollbooth t1;
    int choice;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t1.payingCar();
            break;
        case 2:
            t1.nopayCar();
            break;
        case 3:
            t1.printOnConsole();
            break;
        default:
            cout << "\nEnter correct value" << std::endl;
        }
    }
    return 0;
}