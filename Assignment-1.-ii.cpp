/*Q2. Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();*/
#include<iostream>
using namespace std;
class Datee
{
    int day,month,year;

    public :
   void initDateC()
{
    day=3;
    month=3;
    year=2023;
}
void acceptDateFromConsoleC()
{
    printf("Enter Date : \n");
    scanf("%d",&day);
    printf("Enter month : \n");
    scanf("%d",&month);
    printf("Enter Year: \n");
    scanf("%d",&year);

};
void printDateOnConsoleC()
{
    printf("Date is : %d/%d/%d \n",day,month,year);
}
 bool isleapyear(){
   bool isLeapYear = false;
   if (year % 4 == 0) {
      if (year % 100 == 0) {
         if (year  % 400 == 0) {
            isLeapYear = true;
         }
      } 
      else isLeapYear = true;
   }
   return isLeapYear;
}
};

struct Date
{
    
    int Day,Month,Year;

void initDate(struct Date* ptrDate)
{
    ptrDate->Day=3;
    ptrDate->Month=3;
    ptrDate->Year=2023;
    

}
void acceptDateFromConsole(struct Date *ptrDate)
{
    
    printf("Enter Date : \n");
    scanf("%d",&ptrDate->Day);
    printf("Enter month : \n");
    scanf("%d",&ptrDate->Month);
    printf("Enter Year : \n");
    scanf("%d",&ptrDate->Year);

}
void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is : %d/%d/%d \n",ptrDate->Day,ptrDate->Month,ptrDate->Year);
}
};
int  main()
{
    bool flag;
    struct Date dat ;
    Datee date;
    printf("Structure \n ");
dat.initDate(&dat);
dat.printDateOnConsole(&dat);
dat.acceptDateFromConsole(&dat);
dat.printDateOnConsole(&dat);

printf("Class \n");
date.initDateC();
date.printDateOnConsoleC();
date.acceptDateFromConsoleC();
date.printDateOnConsoleC();
date.isleapyear();
flag = date.isleapyear();
   if(flag == true)  
   {
      cout<<" it a leap Year"; 
   }
   else {
      cout<<" it is not a leap Year \n";
   }
    
}