/*Q1. Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);*/
#include<stdio.h>
struct Date
{
    
    int day,month,year;
};
void initDate(struct Date* ptrDate)
{
    ptrDate->day=3;
    ptrDate->month=3;
    ptrDate->year=2023;
    

}
void acceptDateFromConsole(struct Date *ptrDate)
{
    
    printf("Enter Date : \n");
    scanf("%d",&ptrDate->day);
    printf("Enter month : \n");
    scanf("%d",&ptrDate->month);
    printf("Enter Date : \n");
    scanf("%d",&ptrDate->year);

};
void printDateOnConsole(struct Date* ptrDate)
{
    printf("Date is : %d/%d/%d \n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void main()
{
    struct Date dat ;
    
initDate(&dat);
printDateOnConsole(&dat);
acceptDateFromConsole(&dat);
printDateOnConsole(&dat);

}