#include <iostream>
using namespace std;
class leap{
    int year;
    public:
    int checkyear();
    void getdata();
    void showdata();
};
int leap::checkyear(){
    int rem4=year%4;
    int rem100=year%100;
    int rem400=year%400;
    if((rem4==0&&rem100!=0)||(rem400==0))
    return 1;
    else
    return 0;
}
void leap::getdata(){
    cout<<"Enter a 4 digit year please: ";
    cin>>year;
}
void leap::showdata(){
    if(checkyear())
    cout<<"\n"<<year<<" is a leap year OK!";
    else
    cout<<"\n"<<year<<" is not a leap year.";
}
int main(){
    leap yr;
    yr.getdata();
    yr.showdata();
}