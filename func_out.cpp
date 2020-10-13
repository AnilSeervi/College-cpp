#include <iostream>
using namespace std;
class employee{
    char name[20];
    int basic;
    public:
    void getdata();
    void showdata();
};
void employee::getdata(){
    cout<<"Enter employee name: ";
    cin.getline(name,20);
    cout<<"Enter basix Pay: ";
    cin>>basic;
}
void employee::showdata(){
    cout<<"Name of employee: "<<name;
    cout<<"\nBasic Pay of employee: "<<basic;
}
int main(){
    employee e;
    e.getdata();
    e.showdata();
    return 0;
}