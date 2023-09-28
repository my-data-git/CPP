/*Q1. Write a menu driven program to calculate volume of the box(length * width * height).
Provide necessary constructors.*/
#include<iostream>
using namespace std;
class box{
    float length,width,height;
    public :
    box()
    {
        this->length=this->width=this->height=0;
    }
    box(float l,float w,float h)
    {
       this->length=l;
        this->width=w;
        this->height=h;
    }
     void boxInit()
    {
         this->length=10.3;
        this->width=33.2;
        this->height=19.2;
    }
    void calculateVolume(){
	double vol= this->length*this->height*this->width;
	cout<<"\nVolume of your box is : " <<vol <<"\n"<< endl;
}
void displayDimension(){
	cout
	<<"\n---------------------------------\n"
	<<"Dimension of your box is"
	<<"\nLenght : "
	<<this->length
	<<"\nheight : "
	<<this->height
	<<"\nWidth : "
	<<this->width
	<<"\n---------------------------------\n"
	<<endl; }
void acceptDimension(){
	cout<<"Enter the Dimension of your box as directed\n"
	<<"Enter the Lenght :" <<endl;
	cin>>this->length;
	cout<<"\nEnter the heigth :"<<endl;
	cin>>this->height;
	cout<<"\nEnter the witdh :"<<endl;
	cin>>this->width;
}

};
int menu(){
    int choice;
	cout
	<<"\n0. Exit the program.\n"
	<<"1. Enter the dimension of your box.\n"
	<<"2. Initialize your box with default dimensions.\n"
	<<"3. Display dimension of your box in console.\n"
	<<"4. Calculate the volume of your box \n";
	cin>>choice;
    cout << "*******************" << endl;
	return choice;
}
int main(){

box b1;
int choice;
while((choice=menu())!=0){
	switch(choice){
		case 1:
		b1.acceptDimension();
		break;
		case 2:
		b1.boxInit();
        b1.displayDimension();
		break;
		case 3:
		b1.displayDimension();
		break;
		case 4:
		b1.calculateVolume();
		break;
		default:
			cout<<"\nEnter correct value"<<endl;
	}
}
return 0;
}