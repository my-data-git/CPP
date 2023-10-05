/*Q2. A Product sells book or tapes. The Book class holds id, title, author, and price; whereas Tape class
holds id, title, artist, and price. There is 5% discount on tapes, while 10% discount on books.
Assuming that each user purchase 3 products (either book or tape), calculate final bill. The program
should be menu driven and should not cause memory leakage.*/

#include <iostream>
float bill=0;
using namespace std;

class Product
{
protected:
    int id;
    string title;
    float price;
    string type;

public:
    Product()
    {
        this->id = 0;
        this->title = "";
        this->price = 0;
        this->type = "";
    }
    Product(int id, string title, float price)
    {
        this->id = id;
        this->title = title;
        this->price = price;
    }
    void setType(string type)
    {
        this->type = type;
    }
    string getType()
    {
        return this->type;
    }
    float getPrice()
    {
        return this->price;
    }
    void setPrice(float price)
    {
        this->price = price;
    }
    virtual void addProduct()
    {
        cout << "Enter Id = ";
        cin >> id;
        cout << "Enter Title = ";
        cin >> title;
        cout << "Enter Price = ";
        cin >> price;
        
    }
    // virtual void addProduct() = 0;
    // friend void calculateBill(Product arr[]);
};
class Book : public Product
{
private:
    string author;

public:
    Book()
    {
        this->author = "";
        this->type = "B";
    }
    Book(string author)
    {
        this->author = author;
    }
    void addProduct()
    {
        Product::addProduct();
        cout << "Enter Book Author = ";
        cin >> author;
        cout<<"Book is added to the bill "<<endl;
    }
};

class Tape : public Product
{
private:
    string artist;

public:
    Tape()
    {
        this->artist = "";
        this->type = "T";
    }
    Tape(string artist)
    {
        this->artist = artist;
    }
    void addProduct()
    {
        Product::addProduct();
        cout << "Enter Tape artist = ";
        cin >> artist;
        cout<<"Tape is added to the bill "<<endl;

    }
};

void calculateBill()
{       
    cout<<endl<<"The bill is = "<<bill<<endl;
}
enum Menu
{
    EXIT,
    ADDBOOK,
    ADDTAPE,
    CALCULATEBILL,
    DISPLAY

};
Menu menu_driven()
{
    int choice;
    cout << "-------------------" << endl;
    cout << " Exit. 0" << endl;
    cout << "ADD BOOK. 1 " << endl;
    cout << "ADD TAPE. 2 " << endl;
    cout << "CALCULATE BILL. 3 " << endl;
    cout << "Enter your choice :- ";
    cin >> choice;
    cout << "-----------------------------" << endl;
    return Menu(choice);
}
int main()
{
    Product *arr[3];
    Product *p1;
    int index = 0;
    int choice;
    while ((choice = menu_driven()) != 0)
    {
        switch (choice)
        {
        case ADDBOOK:
            if (index < 3)
            {
                arr[index] = new Book();
                arr[index]->setType("B");
                arr[index]->addProduct();
            bill=bill+ arr[index]->getPrice()-arr[index]->getPrice()*0.10;
                index++;
            }
            else
                cout << "Cart is full we cannot add Book " << endl;
            break;
        case ADDTAPE:
            if (index < 3)
            {
                arr[index] = new Tape();
                 arr[index]->setType("T");
                arr[index]->addProduct();
               bill=bill+ arr[index]->getPrice()-arr[index]->getPrice()*0.05;
                index++;
            }
            else
                cout << "Cart is full we cannot add Tape " << endl;
            break;
        case CALCULATEBILL:
            calculateBill();
            break;

        default:
            cout << "Entered Wrong Product !!! " << endl;
            break;
        }
    }

    cout << "Thank you Visit again!!!" << endl;

    return 0;
}

