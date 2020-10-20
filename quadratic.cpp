#include <iostream>
#include <math.h>
using namespace std;
class Qaud{
    private:
    float a,b,c;
    float x1,x2;
    public:
    Qaud(){
        a=0;b=0;c=0;
    }
    void getdata(){
        cout<<"Enter the values of a, b and c: ";
        cin>>a>>b>>c;
    }
    float disc(){
        return(b*b-4*a*c);
    }
    void root_equal(){
        cout<<"Roots are equal"<<endl;
        cout<<"x1=x2="<<-b/(2*a)<<endl;
    }
    void root_real(){
        cout<<"Roots are real and unequal"<<endl;
        x1=(-b+sqrt(disc()))/(2*a);
        x2=(-b-sqrt(disc()))/(2*a);
        cout<<"x1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    void root_imag(){
        float rpart, ipart;
        rpart=-b/(2*a);
        ipart=sqrt(abs(disc()))/(2*a);
        cout<<"Roots are imaginary"<<endl;
        cout<<"x1="<<rpart<<"+i"<<ipart<<endl;
        cout<<"x2="<<rpart<<"-i"<<ipart<<endl;
    }
};
int main(){
    Qaud r1;
    r1.getdata();
    if(r1.disc()==0)
    r1.root_equal();
    else if(r1.disc()>0)
    r1.root_real();
    else
    r1.root_imag();
    return 0;
}