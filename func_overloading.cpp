#include <iostream>
using namespace std;
const double pi=3.416;
class Shape{
    public:
    void measure(double r){
        cout<<"\nArea of a circle is: "<<pi*r*r;
        cout<<"\nVolume of a sphere is: "<<(4.0/3)*pi*r*r*r<<endl;
    }
    void measure(long l,int b,int h){
        cout<<"\nArea of a rectangle is: "<<l*b;
        cout<<"\nVolume of a rectangle box is: "<<l*b*h<<endl;
    }
    void measure(float f){
        cout<<"\nArea of a square is: "<<f*f;
        cout<<"\nVolume of a cube is: "<<f*f*f<<endl;
    }
};
int main(){
    int b,h;
    long l;
    double r;
    float f;
    Shape obj;
    cout<<"\n\tCalculation of Area and Volume\n";
    cout<<"\nEnter radius of the Circle: ";
    cin>>r;
    obj.measure(r);
    cout<<"\nEnter length, breadth and height of a Rectangle box: ";
    cin>>l>>b>>h;
    obj.measure(l,b,h);
    cout<<"\nEnter the length of a side of a square: ";
    cin>>f;
    obj.measure(f);
}