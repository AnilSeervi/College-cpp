#include <iostream>
#include <iomanip>
using namespace std;
class Max{
    private:
    int x,y;
    public:
    void getdata(){
        cout<<endl<<"Enter a number: ";
        cin>>x;
        cout<<endl<<"Enter another number: ";
        cin>>y;
    }
    void showdata(){
        cout<<endl<<"x is : "<<x;
        cout<<endl<<"y is : "<<y;
    }
    friend int large(Max m);
};
int large(Max m){
    if(m.x>m.y)
    return m.x;
    else
    return m.y;
}
int main(){
    Max m;
    int big;
    m.getdata();
    m.showdata();
    cout<<endl<<"Largest is: "<<large(m);
}