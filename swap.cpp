#include <iostream>
using namespace std;
class sample{
    private:
    int x,y;
    public:
    void setdata(int a, int b){
        x=a;
        y=b;
    }
    void showdata(){
        cout<<"\nx = "<<x<<"\ny = "<<y;
    }
    friend void swap(sample &);
};
void swap(sample &s){
    int temp;
    temp=s.x;
    s.x=s.y;
    s.y=temp;
}
int main(){
    sample s;
    int x1,x2;
    cout<<"\nInput 2 numbers: ";
    cin>>x1>>x2;
    s.setdata(x1,x2);
    cout<<"\nBefore swapping: ";
    s.showdata();
    swap(s);
    cout<<"\nAfter swapping: ";
    s.showdata();
    return 0;
}