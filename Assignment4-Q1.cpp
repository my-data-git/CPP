/*Q1. Write a class for Time and provide the functionality
Time()
Time(int h,int m,int s)
getHour()
getMinute()
getSeconds()
printTime()
setHour()
setMinute()
setSeconds()
In main create array of objects of Time.
Allocate the memory for the array and the object dynamically.*/
#include<iostream>
using namespace std;

class Time{
    private:
    int h,m,s;
    public :
    Time()
    {
        this->h=this->m=this->s=0;
    }
    Time(int h,int m,int s){
            this->h=h;
            this->m=m;
            this->s=s;
        }
       int getHour(){
            return this->h;
        }
        int getMinute(){
            return this->m;
        }
        int getSeconds(){
            return this->s;
        }
        void setHour(int h){this->h=h;}
        void setMinute(int m){this->m=m;}
        void setSeconds(int s){this->s=s;}
       
        void printTime(){
            cout<<
            "Your Entered Time is    "<<
            this->h<<
            ":"<<
            this->m<<
            ":"<<
            this->s<<
            endl;
        }

};
int main()
{
    int count=0;
    cout<<"Enter the number of the time you want to add to array.\n";
    cin>>count;
    Time *obj=new Time[count];
int h=0,m=0,s=0;
    for(int i=0;i<count;i++){
        cout<<"Initailize s[" <<i<<"]:\n"<<"Enter HH MM SS"<<endl;
        cin>>h >> m >>s;
        obj[i].setHour(h);
        obj[i].setMinute(m);
        obj[i].setSeconds(s);       
    }
    for(int i=0;i<count;i++){
        
        cout<<"----------------------------------------------\n"<<endl;
        obj[i].printTime();
        cout<<"\n----------------------------------------------\n"<<endl;
    }
    delete obj;
    return 0;    

}