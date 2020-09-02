/*WAP that uses a date structure within a class. Enter any date and your birth date. 
The program must display your exact age in years, months and days.*/
#include<iostream>
#include<string.h>
using namespace std;

class age{
    char *dob;
    public:
        age(char *d){
            dob=new char[strlen(d)];
            dob=d;
        }
        void get_age(char *today_date){
            int size=strlen(today_date);
            char *day = new char[2];
            char *month = new char[2];
            char *year = new char[4];
            char *tday = new char[2];
            char *tmonth = new char[2];
            char *tyear = new char[4];
            int j=0;
            for(int i=0;i<2;i++){
                day[j]=dob[i];
                j++;
            }
            j=0;
            for(int i=3;i<5;i++){
                month[j]=dob[i];
                j++;
            }
            j=0;
            for(int i=size-4;i<size;i++){
                year[j]=dob[i];
                j++;
            }
            j=0;
            for(int i=0;i<2;i++){
                tday[j]=today_date[i];
                j++;
            }
            j=0;
            for(int i=3;i<5;i++){
                tmonth[j]=today_date[i];
                j++;
            }
            j=0;
            for(int i=size-4;i<size;i++){
                tyear[j]=today_date[i];
                j++;
            }
            cout<<"YOU are "<<stoi(tyear)-stoi(year)<<"Years,"<<stoi(tmonth)-stoi(month)<<"Months,"<<stoi(day)-stoi(tday)<<"Days old"<<endl;
        }
        ~age(){
            delete(dob);
        }
};
int main(){
    char *dob=new char[10];
    char *date=new char[10];
    cout<<"Enter the date of birth in dd-mm-yyyy format"<<endl;
    cin>>dob;
    cout<<"Enter todays date"<<endl;
    cin>>date;
    age a(dob);
    a.get_age(date);
    return 0;
}