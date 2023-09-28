/*Q2. Stack is a Last-In-First-Out data structure. Write a Stack class. It implements stack using
Dynamically allocated array. Stack size should be passed in parameterized constructor. If size is not
given, allocate stack of size 5.
Provide member functions like push(), pop(), peek(), isEmpty(), isFull(), and print().*/
#include<iostream>
using namespace std;
#define print(a) cout<<a<<endl
#define p(a) cout<<a<<endl
#define scan(a) cin>>a
int choice;
class stack{
    private:
        int size;
        int *arr;
        int countElement;
    public:
        stack(){
            this->size=5;
            this->arr = new int[5];
            this->countElement=0;
        }
        stack(int size){
            this->size=size;

            this->countElement=0;
            this->arr = new int[this->size];

        }   
        void push(int data){
            if(this->isFull()){
                print("Is Full");
            }else{
            this->arr[this->countElement+1]=data;
            this->countElement++;
            }
        }
        void pop(){
            if(this->isEmpty()){
                print("Is Empty");
            }
            else{
            print(this->arr[this->countElement]);
            arr[this->countElement]=0;
            countElement--;
            }
        }
        void peek(){
            if(this->isEmpty()){
                print("Is Empty");
            }
            else{
            print(this->arr[this->countElement]);
            }
        }




        bool isEmpty(){
            if(this->countElement==0){
               // print("IS EMPTY");
                return true;
            }else{
                return false;
            }
            
        }
        bool isFull(){
            if(this->countElement==this->size){
                return true;
                }
                else{
                    return false;
                }
        }
        void printStack(){
            for(int i=1;i<=countElement;i++){
                print(this->arr[i]);
            }

        }

        void remainingSpot(){
            int remainingSpot= this->size-this->countElement;
            print("Number of remaining Spots are : ");
            print(remainingSpot);
        }



};

int menu(){
    p("Enter the corresponding digit");
    p("0. EXIT");
    //p("1. Creating an stack");
    p("1. Push(int) - add data to top of stack");
    p("2. Pop() - remove data from the top and print it");
    p("3. Peek() - print data of top of stack without removing");
    p("4. Number of spot remaining in the stack");
    p("5. Print the element in stack");
    p("Enter your digit : ");
    scan(choice);
    return choice;
}
int main(){
    int size;
    int  aorb=0;
    int value;
    int userSize;

        print("Do you want to initalize size of your stack? \nPress 1 for yes and Press 2 for no");
        print("Note: If pressed 2, size of stack will be initalize to default size 5");
        int yesOrNo;
        scan(yesOrNo);
        if(yesOrNo==1){
        print("Enter the size : ");
        scan(userSize);
        size=userSize;
        
        }else{
            size =5;
        }
    stack a(size);
    while(menu()){
        switch (choice)
        {
           /* case 1:
            print("Do you want to initalize size of your stack? \nPress 1 for yes and Press 2 for no");
        print("Note: If pressed 2, size of stack will be initalize to default size 5");
        int yesOrNo;
        scan(yesOrNo);
        if(yesOrNo==1){
        print("Enter the size : ");
        scan(size);
        stack a(size);
    }else{
        stack a;
    }
            break;
        */
        case 1:
            print("Enter value you want to push");
            scan(value);
            a.push(value);
            break;
        case 2: 
            a.pop();
            
            break;
        case 3:
             
            a.peek();
            
            break;
        case 4:
             
            a.remainingSpot();
            
            break;
        case 5:
        
                a.printStack();
            
            break;
        default:
        print("Enter correct digit");
            break;
        }
    }

return 0;
}