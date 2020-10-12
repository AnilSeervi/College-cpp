#include <iostream>
using namespace std;
const float pi = 3.14159;
inline float circum(float x){
    return(2*pi*x);
}
inline float area(float x){
    return(pi*x*x);
}
int main(){
    float r;
    cout<<"\nEnter the radius of a circle: ";
    cin>>r;
    cout<<"\nCircumference: "<<circum(r);
    cout<<"\nArea: "<<area(r);
    return 0;
}