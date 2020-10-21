#include <iostream>
using namespace std;
class Date{
    private:
    int day, month, year;
    public:\
    Date(){}
    Date(int d,int m, int y=2015){
        day=d;month=m;year=y;
    }
    void getdate();
    void showdate();
};
void Date::getdate(){
    cout<<"Enter the date in dd mm yyyy format: ";
    cin>>day>>month>>year;
}
void Date::showdate(){
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}
int main(){
    Date d1,d2(20,5);
    Date d3(6,6,1970);
    cout<<"Date 1:";d1.getdate();
    cout<<"Date 1: ";d1.showdate();
    cout<<"Date 2: ";d2.showdate();
    cout<<"Date 3: ";d3.showdate();
}